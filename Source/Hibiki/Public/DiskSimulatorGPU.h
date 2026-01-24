#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "DiskSimulatorGPU.generated.h"

class UNiagaraComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ADiskSimulatorGPU : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CollisionActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox WallBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> OverlapQueryObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnSystemFinish: 1;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UPrimitiveComponent>, FTransform> PrevCoinBlockerCollisionsPoseMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UPrimitiveComponent>, FTransform> CoinBlockerCollisionsPoseMap;
    
public:
    ADiskSimulatorGPU(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
    
};

