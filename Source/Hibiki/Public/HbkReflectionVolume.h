#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkReflectionVolume.generated.h"

class UHbkReflectionVolumeGameComponent;

UCLASS(Blueprintable)
class AHbkReflectionVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkReflectionVolumeGameComponent* HbkReflectionVolumeComponent;
    
    AHbkReflectionVolume(const FObjectInitializer& ObjectInitializer);

};

