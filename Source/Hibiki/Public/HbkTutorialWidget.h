#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialButtonTiming.h"
#include "EHbkTutorialResultType.h"
#include "HbkTutorialChangeBeatDelegate.h"
#include "HbkTutorialFinishBeatDelegate.h"
#include "HbkTutorialMissDelegateDelegate.h"
#include "HbkTutorialScoreRow.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "TutorialResultDelegateDelegate.h"
#include "HbkTutorialWidget.generated.h"

class UCanvasPanel;
class UHbkTutorialBeatButtonWidget;
class UHbkTutorialBeatInputLineWidget;
class UHbkTutorialBeatJudgeWidget;
class UHbkTutorialManager;
class UOverlay;
class UPanelWidget;
class UTngUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTutorialChangeBeat OnChangeBeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTutorialFinishBeat OnFinishBeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialResultDelegate OnTutorialResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTutorialMissDelegate OnCalledMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPanelWidget> BeatPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOverlay> ButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOverlay> LineOverlayPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCanvasPanel> LineCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOverlay> JudgeTextPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTngUserWidget> MoveLineWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialBeatButtonWidget> BeatButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialBeatInputLineWidget> InputLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngUserWidget> ButtonLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialBeatJudgeWidget> BeatJudgeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JustTimingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoodTimingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailedTimingRange;
    
    UHbkTutorialWidget();

    UFUNCTION(BlueprintCallable)
    void StartMoveLine();
    
    UFUNCTION(BlueprintCallable)
    void SetTimingRange(float NewJustTimingRange, float NewGoodTimingRange, float NewFailedTimingRange);
    
    UFUNCTION(BlueprintCallable)
    void SetScore(UHbkTutorialManager* Manager);
    
    UFUNCTION(BlueprintCallable)
    void SetInfo(UPanelWidget* NewBeatPanel, UOverlay* NewButtonPanel, UOverlay* NewLineOverlayPanel, UCanvasPanel* NewLineCanvasPanel, UOverlay* NewJudgeTextPanel, UTngUserWidget* NewMoveLineWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetBeatHit(UHbkTutorialManager* Manager, FHbkTutorialScoreRow BeatHitNote);
    
    UFUNCTION(BlueprintCallable)
    void ResetBeat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTutorialResult(EHbkTutorialResultType& Result, bool bCallDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNearButtonNum();
    
    UFUNCTION(BlueprintCallable)
    void CheckPlayerInput(FHbkTutorialScoreRow Note, EHbkTutorialButtonTiming ButtonTiming);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartMoveLine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnMissStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnFinishBeat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeBeat(int32 Index);
    
};

