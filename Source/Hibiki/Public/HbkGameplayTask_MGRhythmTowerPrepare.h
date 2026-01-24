#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameplayTask_MGRhythmTowerPrepare.generated.h"

class AHbkCh4000_RTKorsica;
class UHbkDialog_SpectraRoom;
class UHbkGameplayTask_MGRhythmTowerResult;
class UHbkRhythmTowerRestTimeWidget;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmTowerPrepare : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkCh4000_RTKorsica* pKorsica;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkDialog_SpectraRoom* DialogTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerRestTimeWidget* pRestTimeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerResult* pRTResult;
    
public:
    UHbkGameplayTask_MGRhythmTowerPrepare();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSuspendSave();
    
    UFUNCTION(BlueprintCallable)
    void OnReady();
    
    UFUNCTION(BlueprintCallable)
    float OnPurchaseProduct(const FText& ProductName, float CostTime);
    
    UFUNCTION(BlueprintCallable)
    void OnKorsicaEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnInteraction();
    
    UFUNCTION(BlueprintCallable)
    void OnGiveUp();
    
    UFUNCTION(BlueprintCallable)
    void OnCancel();
    
};

