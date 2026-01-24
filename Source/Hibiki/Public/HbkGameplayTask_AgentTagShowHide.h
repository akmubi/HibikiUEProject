#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "EHbkNote.h"
#include "HbkGameplayTask_AgentTagShowHide.generated.h"

class UHbkGameplayTask_AgentTagShowHide;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_AgentTagShowHide : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGameplayTask_AgentTagShowHide_Success);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_AgentTagShowHide_Success OnSuccess;
    
    UHbkGameplayTask_AgentTagShowHide(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_AgentTagShowHide* OnShowHideInGameAgentTag(UObject* WorldContextObject, FGameplayTagContainer ShowTag, FName ShowCallSign, FGameplayTagContainer HideTag, FName HideCallSign, EHbkNote SyncNote, int32 WaitNoteCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NoteEventWhole_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEventQuarter_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEventHalf_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEvent8th_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void NoteEvent16th_ShowHideInGameTagControl(int32 l_NoteCount, bool bDownBeat);
    
};

