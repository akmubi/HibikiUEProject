#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmScoreResult.h"
#include "HbkRhythmNoteParam.h"
#include "HbkScoreBarButtonInfo.h"
#include "HbkScoreBeatLineInfo.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkSpAttackScoreBarWidget.generated.h"

class UHbkScoreBarPartsWidget;
class UOverlay;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSpAttackScoreBarWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkScoreBarPartsWidget> ButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkScoreBarPartsWidget> BeatLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkScoreBarButtonInfo> ButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkScoreBeatLineInfo> BeatLineList;
    
public:
    UHbkSpAttackScoreBarWidget();

    UFUNCTION(BlueprintCallable)
    void SetPartsWidget(UOverlay* NewScorePanel, UOverlay* NewLinePanel, UPanelWidget* NewSizePanel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnScoreStart();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnScoreEnd();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmScoreResult(float TotalScoreRate);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRegisterScore(const TArray<FHbkRhythmNoteParam>& ScoreList, float OffsetTime);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnInputResult(EHbkRhythmScoreResult ResultType, int32 Index, bool bInput);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeatTiming(int32 NoteIndex, const FHbkRhythmNoteParam& NoteParam);
    
    UFUNCTION(BlueprintCallable)
    void OnQuarterNote(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInput(EHbkRhythmScoreResult ResultType, float PointRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeatTiming(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void On8thNote(int32 NoteCount, bool bDownBeat);
    
};

