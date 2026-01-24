#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "EHbkGimmickCurveType_t.h"
#include "HbkGimmick_RhythmLaserMovementPattern.h"
#include "HbkGimmick_RhythmLaserAttack.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmLaserAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t RotateCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmLaserMovementPattern> MovementPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserAttackCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserAttackCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDrawDebugTrace::Type> LaserAttackDrawDebugType;
    
    HIBIKI_API FHbkGimmick_RhythmLaserAttack();
};

