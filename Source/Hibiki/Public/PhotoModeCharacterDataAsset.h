#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPhotoModeCharacterId.h"
#include "PhotoModeCharacterParameter.h"
#include "PhotoModeCharacterDataAsset.generated.h"

UCLASS(Blueprintable)
class UPhotoModeCharacterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPhotoModeCharacterId, FPhotoModeCharacterParameter> CharacterMap;
    
public:
    UPhotoModeCharacterDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

