#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_BalloonConstraint.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BalloonConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysicsConstraintName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositionOffset;
    
    HIBIKI_API FHbkGimmick_BalloonConstraint();
};

