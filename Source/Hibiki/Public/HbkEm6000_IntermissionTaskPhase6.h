#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkNote.h"
#include "HbkEm6000_IntermissionTaskBase.h"
#include "HbkRhythmSynchroSignalCue.h"
#include "HbkEm6000_IntermissionTaskPhase6.generated.h"

class UHbkRhythmSynchroSignalComponent;

UCLASS(Blueprintable)
class AHbkEm6000_IntermissionTaskPhase6 : public AHbkEm6000_IntermissionTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MiniGameTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToSlowMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCountToSlowMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToJustBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRateToJustBefore;
    
public:
    AHbkEm6000_IntermissionTaskPhase6(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSignalEvent(const FHbkRhythmSynchroSignalCue& SignalCue);
    
    UFUNCTION(BlueprintCallable)
    void OnEndFinishCamera();
    
};

