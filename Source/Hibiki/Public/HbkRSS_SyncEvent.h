#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkNote.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkRSS_SyncEvent.generated.h"

class UHbkRSS_SyncEvent;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkRSS_SyncEvent : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSSSyncEventDelegate, int32, NoteCount, int32, CallCount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSSyncEventDelegate OnEvent;
    
    UHbkRSS_SyncEvent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkRSS_SyncEvent* RSS_SyncEvent(UObject* WorldContextObject, EHbkNote SyncType, FGameplayTagContainer StartTags, FGameplayTagContainer CallTags, int32 LoopCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReceiveSyncNoteEvent(int32 BeatCount, bool bOnBeat);
    
};

