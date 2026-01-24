#pragma once
#include "CoreMinimal.h"
#include "HbkDecalLightVolumeComponentTNG.h"
#include "HbkDecalLightDecalVolumeComponent.generated.h"

class AActor;
class AHbkDecalLight;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkDecalLightDecalVolumeComponent : public UHbkDecalLightVolumeComponentTNG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBPActorWithDecalLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkDecalLight* HbkDecalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BPActorWithDecalLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawPriority;
    
    UHbkDecalLightDecalVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

