#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeMotionParameterType.h"
#include "PhotoModeTableRowBase.h"
#include "PhotoModeCharacterMotionParameter.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPhotoModeCharacterMotionParameter : public FPhotoModeTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameStringId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> Motion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoModeMotionParameterType Type;
    
    HIBIKI_API FPhotoModeCharacterMotionParameter();
};

