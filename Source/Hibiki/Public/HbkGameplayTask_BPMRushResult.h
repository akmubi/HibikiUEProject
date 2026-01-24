#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_BPMRushResult.generated.h"

class AHbkBPMRushController;
class UHbkBPMRushResultWidget;
class UHbkBPMRushSettingsDataAsset;

UCLASS(Blueprintable)
class UHbkGameplayTask_BPMRushResult : public UGameplayTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkBPMRushController* BPMRushController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkBPMRushSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkBPMRushResultWidget* ResultWidget;
    
public:
    UHbkGameplayTask_BPMRushResult(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReturnToHideout();
    
    UFUNCTION(BlueprintCallable)
    void Retry();
    
};

