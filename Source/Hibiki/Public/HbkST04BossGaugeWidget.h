#pragma once
#include "CoreMinimal.h"
#include "HbkBossGageBaseWidget.h"
#include "HbkST04BossGaugeWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkST04BossGaugeWidget : public UHbkBossGageBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FundRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FundPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsedFundNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BG_LoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Widget_OpenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UseFund_InAnim;
    
public:
    UHbkST04BossGaugeWidget();

    UFUNCTION(BlueprintCallable)
    void UseFund(int32 UsedFund);
    
    UFUNCTION(BlueprintCallable)
    void ST04GaugeSetUp(int32 MaxFund);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUseFund(int32 UseFundNum);
    
    UFUNCTION(BlueprintCallable)
    void OnQuarterNote(int32 NoteCount, bool bDownBeat);
    
};

