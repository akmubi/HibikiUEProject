#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_BPMRushWaveStart.generated.h"

class AHbkBPMRushController;
class UHbkBPMRushSettingsDataAsset;

UCLASS(Blueprintable)
class UHbkGameplayTask_BPMRushWaveStart : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkBPMRushController* BPMRushController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkBPMRushSettingsDataAsset* SettingsData;
    
public:
    UHbkGameplayTask_BPMRushWaveStart(const FObjectInitializer& ObjectInitializer);

};

