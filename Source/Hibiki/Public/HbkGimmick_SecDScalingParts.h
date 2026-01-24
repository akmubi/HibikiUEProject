#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SecDScalingParts.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SecDScalingParts : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t ScalingCurveType;
    
public:
    AHbkGimmick_SecDScalingParts(const FObjectInitializer& ObjectInitializer);

};

