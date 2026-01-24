#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "HbkShadowVolumePhase.h"
#include "HbkShadowVolumePhaseActor.generated.h"

UCLASS(Blueprintable)
class AHbkShadowVolumePhaseActor : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkShadowVolumePhase GameEnvPhaseStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkShadowVolumePhase GameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkShadowVolumePhase GameEnvPhaseC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkShadowVolumePhase GameEnvPhaseD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkShadowVolumePhase GameEnvPhaseE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkShadowVolumePhase GameEnvPhaseF;
    
public:
    AHbkShadowVolumePhaseActor(const FObjectInitializer& ObjectInitializer);

};

