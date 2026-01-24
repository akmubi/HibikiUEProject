#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTalkContext.h"
#include "HbkTalkSesEndDelegateDelegate.h"
#include "HbkTalkSesTalkCueDelegateDelegate.h"
#include "HbkTalkSessionTask.generated.h"

class AActor;
class AHbkTalkSession;
class UDataTable;
class UHbkTalkSessionTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkTalkSessionTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSesTalkCueDelegate OnTalkCue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSesEndDelegate OnTalkCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSesEndDelegate OnTalkEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkTalkSession> TalkSessionPtr;
    
public:
    UHbkTalkSessionTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkTalkSessionTask* StartTalkSessionTask(UObject* WorldContextObject, UDataTable* TalkData, FName StartTalkRow, AActor* SessionOwner, bool bUnPlayable, bool bPauseRhythmMeter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RecieveTalkNewLine(const FName NewLineName);
    
    UFUNCTION(BlueprintCallable)
    void RecieveTalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void RecieveTalkCue(const FName TalkCueName);
    
    UFUNCTION(BlueprintCallable)
    void RecieveTalkCancelled(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void OnTalkSessionEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

