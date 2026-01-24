#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickFloor.h"
#include "HbkGimmickFloorMovingWalk.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmickFloorMovingWalk : public AHbkGimmickFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveForce;
    
    AHbkGimmickFloorMovingWalk(const FObjectInitializer& ObjectInitializer);

};

