#pragma once
#include "CoreMinimal.h"
#include "TngJCPColliderBase.h"
#include "TngJCPCapsuleCollider.generated.h"

USTRUCT(BlueprintType)
struct FTngJCPCapsuleCollider : public FTngJCPColliderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    TANGOANIMATIONRUNTIME_API FTngJCPCapsuleCollider();
};

