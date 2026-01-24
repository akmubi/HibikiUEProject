#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BuildingSlidePartnerAnimationInfo.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkGimmick_BuildingSlidePartnerAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    HIBIKI_API FHbkGimmick_BuildingSlidePartnerAnimationInfo();
};

