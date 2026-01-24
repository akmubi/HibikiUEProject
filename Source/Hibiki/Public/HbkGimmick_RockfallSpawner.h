#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_RockfallSpawnerAction.h"
#include "HbkGimmick_RockfallSpawnerProduct.h"
#include "HbkGimmick_RockfallSpawnerSound.h"
#include "HbkGimmick_RockfallSpawner.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_RockfallSpawner : public AHbkGimmickBase {
    GENERATED_BODY()
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RockfallSpawnerAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RockfallSpawnerProduct> Products;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RockfallSpawnerSound Sound;
    
public:
    AHbkGimmick_RockfallSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawn();
    
};

