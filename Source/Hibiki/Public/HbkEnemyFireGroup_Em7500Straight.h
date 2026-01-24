#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHbkEm7500StraightFireGroupType.h"
#include "Hbk7500StraightFireGroupParam.h"
#include "HbkEnemyFireGroupBase.h"
#include "HbkEnemyFireGroup_Em7500Straight.generated.h"

class UHbkRhythmSynchroSystem;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemyFireGroup_Em7500Straight : public AHbkEnemyFireGroupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500StraightFireGroupType StraightFireGroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> CheckTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbk7500StraightFireGroupParam FireGroupParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibleHitCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkRhythmSynchroSystem> RSSystem;
    
public:
    AHbkEnemyFireGroup_Em7500Straight(const FObjectInitializer& ObjectInitializer);

};

