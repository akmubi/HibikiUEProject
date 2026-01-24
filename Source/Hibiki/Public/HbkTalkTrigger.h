#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkTalkContext.h"
#include "HbkTalkTriggerTalk.h"
#include "HbkTalkTriggerType.h"
#include "HbkTriggerBox.h"
#include "HbkTalkTrigger.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkTalkTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTalkTriggerDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkTriggerDelegate OnTalkStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkTriggerDelegate OnTalkEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkTriggerType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkTriggerTalk Talk;
    
public:
    AHbkTalkTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TalkEnded(const FHbkTalkContext TalkContext);
    
public:
    UFUNCTION(BlueprintCallable)
    void SubWaitTimer(int32 SubNoteCount, float SubTime);
    
    UFUNCTION(BlueprintCallable)
    void SetWaitTimer(bool bUseNote, EHbkNote NoteType, int32 NoteCount, float Time);
    
    UFUNCTION(BlueprintCallable)
    void AddWaitTimer(int32 AddNoteCount, float AddTime);
    
};

