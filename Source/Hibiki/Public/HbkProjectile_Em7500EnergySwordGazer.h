#pragma once
#include "CoreMinimal.h"
#include "HbkComplexLaunchParam.h"
#include "HbkProjectileWithoutMesh.h"
#include "HbkProjectile_Em7500EnergySwordGazer.generated.h"

class AHbkProjectile;
class AHbkProjectile_Em7500EnergySwordGazerSingle;

UCLASS(Blueprintable)
class HIBIKI_API AHbkProjectile_Em7500EnergySwordGazer : public AHbkProjectileWithoutMesh {
    GENERATED_BODY()
public:
    AHbkProjectile_Em7500EnergySwordGazer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveSubstance(AHbkProjectile_Em7500EnergySwordGazerSingle* Substance);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLaunchEvent(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAbortProjectileEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void On8thNoteEvent(int32 NoteCount, bool bOnBeat);
    
};

