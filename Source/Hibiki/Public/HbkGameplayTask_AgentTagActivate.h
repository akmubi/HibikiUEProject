#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "EHbkNote.h"
#include "HbkGameplayTask_AgentTagActivate.generated.h"

class UHbkGameplayTask_AgentTagActivate;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_AgentTagActivate : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskTagActivate_Success);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTagActivate_Success OnSuccess;
    
    UHbkGameplayTask_AgentTagActivate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_AgentTagActivate* OnActivateExtIntAgentTag(UObject* WorldContextObject, FGameplayTagContainer Tag, FName callSign, int32 Value, FGameplayTagContainer deTag, FName deCallSign, int32 deValue, EHbkNote SyncNote, int32 WaitNoteCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_AgentTagActivate* OnActivateAgentTag(UObject* WorldContextObject, FGameplayTagContainer Tag, FName callSign, FGameplayTagContainer deTag, FName deCallSign, EHbkNote SyncNote, int32 WaitNoteCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NoteEventWhole_ActivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEventQuarter_ActivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEventHalf_ActivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEvent8th_ActivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEvent16th_ActivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
};

