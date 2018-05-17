// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/Texture2D.h"
#include "ThirdParty/Steamworks/Steamv139/sdk/public/steam/steam_api.h"
#define ARRAY_COUNT( array ) (sizeof(ArrayCountHelper(array)) - 1)
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamFunctions.generated.h"

/**
 * 
 */
UCLASS()
class COMBINEDGROUPPROJECT_API USteamFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
		UFUNCTION(BlueprintCallable, Category = "SteamFunctions")
		static UTexture2D* GetSteamAvatar();

		UFUNCTION(BlueprintCallable, Category = "SteamFunctions")
			static UTexture2D* GetSteamAvatarByID(FString _playerSteamID);

		UFUNCTION(BlueprintCallable, Category = "SteamFunctions")
			static FString GetSteamID();
		

private:
	static CSteamID SteamIDStringToCSteamID(FString _playerSteamID);
	
	//static FString CSteamIDtoFString(CSteamID i);
	
};
