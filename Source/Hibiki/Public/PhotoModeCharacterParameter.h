#pragma once
#include "CoreMinimal.h"
#include "PhotoModeCharacterMotionDetailParameters.h"
#include "PhotoModeCharacterMotionParameter.h"
#include "PhotoModeCharacterParameter.generated.h"

class AHbkPhotoCharaActor;

USTRUCT(BlueprintType)
struct FPhotoModeCharacterParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameStringId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhotoModeCharacterMotionParameter> MotionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhotoModeCharacterMotionDetailParameters> MotionDetailList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhotoModeCharacterMotionParameter> FacialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHbkPhotoCharaActor> CharaActor;
    
    HIBIKI_API FPhotoModeCharacterParameter();
};

