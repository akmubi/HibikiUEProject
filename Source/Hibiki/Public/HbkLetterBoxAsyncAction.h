#pragma once
#include "CoreMinimal.h"
#include "EHbkLetterBoxSpeedType.h"
#include "EHbkLetterBoxType.h"
#include "EHbkNote.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkLetterBoxAsyncAction.generated.h"

class UHbkLetterBoxAsyncAction;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkLetterBoxAsyncAction : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLetterBoxAsyncEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLetterBoxAsyncEvent OnSyncNoteEvent;
    
    UHbkLetterBoxAsyncAction();

protected:
    UFUNCTION(BlueprintCallable)
    void ReceiveSyncNoteEvent(int32 BeatCount, bool bOnBeat);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkLetterBoxAsyncAction* Hbk_StartLetterBox(UObject* WorldContextObject, EHbkLetterBoxType Type, EHbkLetterBoxSpeedType SpeedType, EHbkNote SyncType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkLetterBoxAsyncAction* Hbk_EndLetterBox(UObject* WorldContextObject, EHbkLetterBoxType Type, EHbkLetterBoxSpeedType SpeedType, EHbkNote SyncType);
    
};

