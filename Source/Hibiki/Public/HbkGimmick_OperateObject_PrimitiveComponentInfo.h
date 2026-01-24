#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkGimmick_OperateObject_PrimitiveComponentInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_OperateObject_PrimitiveComponentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
    HIBIKI_API FHbkGimmick_OperateObject_PrimitiveComponentInfo();
};

