#pragma once
#include "CoreMinimal.h"
#include "ETngJCPSphereColliderType.h"
#include "TngJCPColliderBase.h"
#include "TngJCPSphereCollider.generated.h"

USTRUCT(BlueprintType)
struct FTngJCPSphereCollider : public FTngJCPColliderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngJCPSphereColliderType LimitType;
    
    TANGOANIMATIONRUNTIME_API FTngJCPSphereCollider();
};

