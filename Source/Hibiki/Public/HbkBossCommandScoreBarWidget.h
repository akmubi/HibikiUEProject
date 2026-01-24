#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleResult.h"
#include "EHbkDifficultyType.h"
#include "HbkBattleCommandScoreBarButtonInfo.h"
#include "HbkBattleCommandScoreBeatLineInfo.h"
#include "HbkBossCommandBattleCommand.h"
#include "HbkRhythmNoteParam.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkBossCommandScoreBarWidget.generated.h"

class UHbkBossCommandScoreBarPartsWidget;
class UHbkEm5000_BridgeParameterAsset;
class UHbkEm6000_CommandBattleParameterAsset;
class UHbkEm7500_CommandBattleParameter;
class UOverlay;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBossCommandScoreBarWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBossCommandScoreBarPartsWidget> ButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBossCommandScoreBarPartsWidget> BeatLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkBattleCommandScoreBarButtonInfo> ButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkBattleCommandScoreBeatLineInfo> BeatLineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrinkedTimeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddOffsetTime;
    
public:
    UHbkBossCommandScoreBarWidget();

    UFUNCTION(BlueprintCallable)
    void Start7500(UHbkEm7500_CommandBattleParameter* DataAsset, EHbkDifficultyType Type, int32 CommandIndex, float ShrinkedTime);
    
    UFUNCTION(BlueprintCallable)
    void Start6000(UHbkEm6000_CommandBattleParameterAsset* DataAsset, EHbkDifficultyType Type, int32 CommandIndex, float ShrinkedTime);
    
    UFUNCTION(BlueprintCallable)
    void Start5000(UHbkEm5000_BridgeParameterAsset* DataAsset, EHbkDifficultyType Type, int32 CommandIndex, float ShrinkedTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPartsWidget(UOverlay* NewScorePanel, UOverlay* NewLinePanel, UPanelWidget* NewSizePanel);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetTime(int32 OffsetTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnScoreStart();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnScoreEnd();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRegisterScore(const TArray<FHbkBossCommandBattleCommand>& ScoreList);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnInputResult(int32 Index, EHbkBossCommandBattleResult ResultType, bool IsJust);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnInputPreBegin(float ShrinkedTime);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnInputEnd();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeatTiming(int32 NoteIndex, const FHbkRhythmNoteParam& NoteParam);
    
    UFUNCTION(BlueprintCallable)
    void OnQuarterNote(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInput(EHbkBossCommandBattleResult ResultType, float PointRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeatTiming(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void On8thNote(int32 NoteCount, bool bDownBeat);
    
};

