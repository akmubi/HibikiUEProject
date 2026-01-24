#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000EnemyFireSingleSequence.h"
#include "HbkEnemyFire_Em0210SingleBase.h"
#include "HbkEnemyFire_Em5000Single.generated.h"

class UHbkRhythmSynchroComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemyFire_Em5000Single : public AHbkEnemyFire_Em0210SingleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUpdateSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000EnemyFireSingleSequence> SequenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
public:
    AHbkEnemyFire_Em5000Single(const FObjectInitializer& ObjectInitializer);

};

