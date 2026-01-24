#pragma once
#include "CoreMinimal.h"
#include "EHbkEqualizerWaveShapePattern.h"
#include "HbkEqualizerWaveControlAttack.h"
#include "HbkEqualizerWaveControlAttackPatternWave.h"
#include "HbkEqualizerWaveControlAttackWave.h"
#include "HbkEqualizerWaveControlWave.generated.h"

class AHbkEm5000_EqualizerWaveGround;
class AHbkEm5000_EqualizerWaveWall;

USTRUCT(BlueprintType)
struct FHbkEqualizerWaveControlWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCallWaveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEqualizerWaveShapePattern ShapePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DepthIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToNextTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoticeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoticeToNextTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEqualizerWaveControlAttack AttackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEqualizerWaveControlAttackPatternWave AttackPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEqualizerWaveControlAttackWave AttackWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_EqualizerWaveWall> EqualizerWaveWallActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkEm5000_EqualizerWaveGround>> EqualizerWaveGroundActors;
    
    HIBIKI_API FHbkEqualizerWaveControlWave();
};

