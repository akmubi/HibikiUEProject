#pragma once
#include "CoreMinimal.h"
#include "EHbkBeatHitInputResult.h"
#include "HbkUserWidget.h"
#include "HbkMultiBeatHitWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMultiBeatHitWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyBeatHitId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidgetAnimation> ScaleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidgetAnimation> GoodAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidgetAnimation> PerfectAnimation;
    
public:
    UHbkMultiBeatHitWidget();

    UFUNCTION(BlueprintCallable)
    void SetAnimation(UWidgetAnimation* NewScaleAnimation, UWidgetAnimation* NewGoodAnimation, UWidgetAnimation* NewPerfectAnimation);
    
    UFUNCTION(BlueprintCallable)
    void NextBeatHit(int32 BeatHitId, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartBeatHit(int32 NewBeatHitId, float StartPlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnNextBeatHit(int32 BeatHitId, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeatHitResult(int32 BeatHitId, EHbkBeatHitInputResult InputResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeatHitPerfect(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeatHitGood(float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeatHitFailure(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void BeatHitResult(int32 BeatHitId, EHbkBeatHitInputResult InputResult);
    
};

