#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkBTTaskNode.h"
#include "HbkBTTask_WaitWithBeat.generated.h"

class AActor;
class UHbkRhythmSynchroComponent;

UCLASS(Blueprintable)
class HIBIKI_API UHbkBTTask_WaitWithBeat : public UHbkBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RSComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SyncBeat;
    
public:
    UHbkBTTask_WaitWithBeat();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void FinishExecute(bool bSuccess);
    
};

