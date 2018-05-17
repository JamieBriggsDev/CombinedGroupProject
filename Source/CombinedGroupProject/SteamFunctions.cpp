// Fill out your copyright notice in the Description page of Project Settings.

#include "SteamFunctions.h"


UTexture2D* USteamFunctions::GetSteamAvatar()
{
	uint32 Width;
	uint32 Height;

	if (SteamAPI_Init())
	{
		//Getting the PictureID from the SteamAPI and getting the Size with the ID
		int Picture = SteamFriends()->GetMediumFriendAvatar(SteamUser()->GetSteamID());
		SteamUtils()->GetImageSize(Picture, &Width, &Height);


		if (Width > 0 && Height > 0)
		{
			//Creating the buffer "oAvatarRGBA" and then filling it with the RGBA Stream from the Steam Avatar
			BYTE *oAvatarRGBA = new BYTE[Width * Height * 4];


			//Filling the buffer with the RGBA Stream from the Steam Avatar and creating a UTextur2D to parse the RGBA Steam in
			SteamUtils()->GetImageRGBA(Picture, (uint8*)oAvatarRGBA, 4 * Height * Width * sizeof(char));

			////Swap R and B channels because for some reason the games whack
			//for (uint32 i = 0; i < (Width * Height * 4); i += 4)
			//{
			//	uint8 Temp = oAvatarRGBA[i + 0];
			//	oAvatarRGBA[i + 0] = oAvatarRGBA[i + 2];
			//	oAvatarRGBA[i + 2] = Temp;
			//}

			UTexture2D* Avatar = UTexture2D::CreateTransient(Width, Height, PF_R8G8B8A8);

			//MAGIC!
			uint8* MipData = (uint8*)Avatar->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(MipData, (void*)oAvatarRGBA, Height * Width * 4);
			Avatar->PlatformData->Mips[0].BulkData.Unlock();

			//Setting some Parameters for the Texture and finally returning it
			Avatar->PlatformData->NumSlices = 1;
			Avatar->NeverStream = true;
			//Avatar->CompressionSettings = TC_EditorIcon;

			Avatar->UpdateResource();

			return Avatar;
		}
		return nullptr;
	}
	return nullptr;
}


UTexture2D* USteamFunctions::GetSteamAvatarByID(FString _playerSteamID)
{
	uint32 Width;
	uint32 Height;

	if (SteamAPI_Init())
	{
		// Get CSteamID from FString
		CSteamID PlayerID = SteamIDStringToCSteamID(_playerSteamID);
		//Getting the PictureID from the SteamAPI and getting the Size with the ID
		int Picture = SteamFriends()->GetMediumFriendAvatar(PlayerID);
		SteamUtils()->GetImageSize(Picture, &Width, &Height);


		if (Width > 0 && Height > 0)
		{
			//Creating the buffer "oAvatarRGBA" and then filling it with the RGBA Stream from the Steam Avatar
			BYTE *oAvatarRGBA = new BYTE[Width * Height * 4];


			//Filling the buffer with the RGBA Stream from the Steam Avatar and creating a UTextur2D to parse the RGBA Steam in
			SteamUtils()->GetImageRGBA(Picture, (uint8*)oAvatarRGBA, 4 * Height * Width * sizeof(char));

			////Swap R and B channels because for some reason the games whack
			//for (uint32 i = 0; i < (Width * Height * 4); i += 4)
			//{
			//	uint8 Temp = oAvatarRGBA[i + 0];
			//	oAvatarRGBA[i + 0] = oAvatarRGBA[i + 2];
			//	oAvatarRGBA[i + 2] = Temp;
			//}

			UTexture2D* Avatar = UTexture2D::CreateTransient(Width, Height, PF_R8G8B8A8);

			//MAGIC!
			uint8* MipData = (uint8*)Avatar->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(MipData, (void*)oAvatarRGBA, Height * Width * 4);
			Avatar->PlatformData->Mips[0].BulkData.Unlock();

			//Setting some Parameters for the Texture and finally returning it
			Avatar->PlatformData->NumSlices = 1;
			Avatar->NeverStream = true;
			//Avatar->CompressionSettings = TC_EditorIcon;

			Avatar->UpdateResource();

			return Avatar;
		}
		return nullptr;
	}
	return nullptr;
}


CSteamID USteamFunctions::SteamIDStringToCSteamID(FString _playerSteamID)
{
	uint64 i64 = 0;
	int convCount = sscanf_s(TCHAR_TO_ANSI(*_playerSteamID), "%llu", &i64);
	if (convCount == 0)
	{
		//UE_LOG(DSS_STEAM, Log, TEXT("SteamIDStringToCSteamID - invalid input string %s"), *_playerSteamID);
		return CSteamID((uint64)0);
	}
	return CSteamID(i64);
}