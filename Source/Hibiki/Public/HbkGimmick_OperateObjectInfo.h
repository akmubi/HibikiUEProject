#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_OperateObject_PartnerPointComponentInfo.h"
#include "HbkGimmick_OperateObject_PrimitiveComponentInfo.h"
#include "HbkGimmick_OperateObjectInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkGimmick_OperateObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_OperateObject_PrimitiveComponentInfo> PrimitiveComponentInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_OperateObject_PartnerPointComponentInfo> PartnerPointComponentInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFluctuateFloor;
    
    HIBIKI_API FHbkGimmick_OperateObjectInfo();
};

