#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TngJCPColliderBase.h"
#include "TngJCPPlaneCollider.generated.h"

USTRUCT(BlueprintType)
struct FTngJCPPlaneCollider : public FTngJCPColliderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlane Plane;
    
    TANGOANIMATIONRUNTIME_API FTngJCPPlaneCollider();
};

