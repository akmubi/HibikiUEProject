#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ZanzoFundGauge.generated.h"

class UHbkST04BossGaugeWidget;

UCLASS(Blueprintable)
class AHbkGimmick_ZanzoFundGauge : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFund;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 UsedFund;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkST04BossGaugeWidget* BossGaugeWidget;
    
public:
    AHbkGimmick_ZanzoFundGauge(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseFund(int32 Fund);
    
};

