#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "EHbkNote.h"
#include "HbkGameplayTask_AgentTagDeactivate.generated.h"

class UHbkGameplayTask_AgentTagDeactivate;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_AgentTagDeactivate : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskTagDeactivate_Success);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTagDeactivate_Success OnSuccess;
    
    UHbkGameplayTask_AgentTagDeactivate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_AgentTagDeactivate* OnDeactivateExtIntAgentTag(UObject* WorldContextObject, FGameplayTagContainer Tag, FName callSign, int32 Value, FGameplayTagContainer ActTag, FName ActCallSign, int32 ActValue, EHbkNote SyncNote, int32 WaitNoteCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_AgentTagDeactivate* OnDeactivateAgentTag(UObject* WorldContextObject, FGameplayTagContainer Tag, FName callSign, FGameplayTagContainer ActTag, FName ActCallSign, EHbkNote SyncNote, int32 WaitNoteCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NoteEventWhole_DectivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEventQuarter_DectivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEventHalf_DectivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEvent8th_DectivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEvent16th_DectivateTagControl(int32 l_NoteCount, bool bDownBeat);
    
};

