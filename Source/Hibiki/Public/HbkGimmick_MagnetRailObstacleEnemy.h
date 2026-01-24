#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MagnetRailObstacle.h"
#include "HbkGimmick_MagnetRailObstacleEnemy.generated.h"

class AActor;
class UParticleSystem;

UCLASS(Blueprintable)
class AHbkGimmick_MagnetRailObstacleEnemy : public AHbkGimmick_MagnetRailObstacle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeshReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> PlayerHitVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* PlayerHitVfxRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* moveSplineActor;
    
public:
    AHbkGimmick_MagnetRailObstacleEnemy(const FObjectInitializer& ObjectInitializer);

};

