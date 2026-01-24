#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "HbkCoinBlockerCollisionInfo.h"
#include "HbkCoinBlockerCollisionInstance.h"
#include "HbkCoinBlockerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkCoinBlockerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> ECC_CoinBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CreatePresetCollisionOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkCoinBlockerCollisionInfo> PresetCoinBlockerCollisionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkCoinBlockerCollisionInstance> CoinBlockerCollisionInstances;
    
public:
    UHbkCoinBlockerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugCollisionDraw() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugReset();
    
    UFUNCTION(BlueprintCallable)
    void DebugCollisionDrawOn();
    
    UFUNCTION(BlueprintCallable)
    void DebugCollisionDrawOff();
    
};

