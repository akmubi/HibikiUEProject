#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeCharacterId.h"
#include "HbkPhotoModeModelParameter.h"
#include "HbkPhotoModeCharacterParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModeCharacterParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPhotoModeCharacterId, FHbkPhotoModeModelParameter> CharacterMap;
    
    HIBIKI_API FHbkPhotoModeCharacterParameter();
};

