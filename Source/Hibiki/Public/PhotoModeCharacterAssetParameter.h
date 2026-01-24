#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeCharacterId.h"
#include "PhotoModeCharacterAssetParameter.generated.h"

class AHbkPhotoCharaActor;
class UDataTable;

USTRUCT(BlueprintType)
struct FPhotoModeCharacterAssetParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoModeCharacterId CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameStringId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MotionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MotionDetailTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FacialTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHbkPhotoCharaActor> CharaActor;
    
    HIBIKI_API FPhotoModeCharacterAssetParameter();
};

