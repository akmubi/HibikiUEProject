#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_OperateObject_PartnerPointComponentInfo.generated.h"

class UHbkPartnerTargetPointComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_OperateObject_PartnerPointComponentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkPartnerTargetPointComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PartnerPointEnable;
    
    HIBIKI_API FHbkGimmick_OperateObject_PartnerPointComponentInfo();
};

