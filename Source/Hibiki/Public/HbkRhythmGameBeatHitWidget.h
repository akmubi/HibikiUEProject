#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EHbkRhythmScoreResult.h"
#include "HbkRhythmNoteParam.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkRhythmGameBeatHitWidget.generated.h"

class UHbkRhythmGameHoldWidget;
class UHbkRhythmGamePressWidget;
class UOverlay;
class UTngUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmGameBeatHitWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGamePressWidget> PressButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGameHoldWidget> Hold_RightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGameHoldWidget> Hold_LeftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGameHoldWidget> TwoBeatsHold_RightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGameHoldWidget> TwoBeatsHold_LeftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGameHoldWidget> ThreeBeatsHold_RightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGameHoldWidget> ThreeBeatsHold_LeftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGameHoldWidget> FourBeatsHold_RightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGameHoldWidget> FourBeatsHold_LeftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteNum;
    
public:
    UHbkRhythmGameBeatHitWidget();

private:
    UFUNCTION(BlueprintCallable)
    void VisibilityChanged(ESlateVisibility InVisibility);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPressSuccessSE_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHoldSuccessSE_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGuideBeatSE_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFailSE_BP();
    
    UFUNCTION(BlueprintCallable)
    void OnQuarterNote(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void On8thNote(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void On16thNote(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddChildandSetLocation(UTngUserWidget* ChildWidget, float PosX, float PosY);
    
};

