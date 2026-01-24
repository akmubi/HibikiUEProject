#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkTalkDataRow.h"
#include "HbkTalkSessionAbortRequestDelegate.h"
#include "HbkTalkSessionDelegateDelegate.h"
#include "HbkTalkSessionOnChoiceFocusDelegate.h"
#include "HbkTalkSessionOnCueDelegate.h"
#include "HbkTalkSessionOnNewLineDelegate.h"
#include "HbkTalkSession.generated.h"

class UDataTable;
class UHbkLevelSequencePlayer;

UCLASS(Blueprintable)
class HIBIKI_API AHbkTalkSession : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionDelegate OnTalkEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionDelegate OnTalkCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionOnCue OnTalkCue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionOnNewLine OnTalkNewLine;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionOnChoiceFocus OnTalkChoiceFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionAbortRequest OnPressAbortRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionAbortRequest OnReleaseAbortRequest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurTalkLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkDataRow CurTalkDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkLevelSequencePlayer> LsPlayer;
    
public:
    AHbkTalkSession(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTalkLine(const FName& NewLine);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkData(UDataTable* NewData);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkAutoStep(bool NewFlag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPushActionVoiceLine(const FHbkTalkDataRow& LineData, const FName& LineID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnClearAllActionVoiceLine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnClearActionVoiceLine(const FName& LineID);
    
};

