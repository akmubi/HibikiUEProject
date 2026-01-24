#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_BuildingSlidePartnerInfo.h"
#include "HbkGimmick_BuildingSlidePartnerTimelineInfo.h"
#include "HbkGimmick_BuildingSlidePartner.generated.h"

class AHbkGimmick_BuildingSlideGuide;

UCLASS(Blueprintable)
class AHbkGimmick_BuildingSlidePartner : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_BuildingSlideGuide* BuildingSlideGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_BuildingSlidePartnerTimelineInfo> Timeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_BuildingSlidePartnerInfo> PartnerList;
    
public:
    AHbkGimmick_BuildingSlidePartner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndMoveSpline();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginMoveSpline();
    
};

