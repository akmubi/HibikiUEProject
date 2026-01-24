#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkLiftBattleGauge.generated.h"

class UHbkDamageComponent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkLiftBattleGauge : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MatInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* HbkDamage;
    
public:
    UHbkLiftBattleGauge();

    UFUNCTION(BlueprintCallable)
    void OnChangeHealth(float Value, float PrevValue, float ValueRate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInstanceDynamic* GetMatInsDynamic();
    
};

