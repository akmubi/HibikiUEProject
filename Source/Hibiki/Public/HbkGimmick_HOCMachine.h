#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_HOCMachineCheckPointInfo_t.h"
#include "HbkGimmick_HOCMachineMaterialAssetInfo_t.h"
#include "HbkGimmick_HOCMachineParamInfo_t.h"
#include "HbkGimmick_HOCMachineSoundAssetInfo_t.h"
#include "HbkGimmick_HOCMachine.generated.h"

class AActor;
class UHbkInteractTargetComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_HOCMachine : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_HOCMachineParamInfo_t ParamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_HOCMachineSoundAssetInfo_t SoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_HOCMachineMaterialAssetInfo_t> ActivateAssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_HOCMachineCheckPointInfo_t CheckPointInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActivate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkInteractTargetComponent* InteractTargetComponent;
    
public:
    AHbkGimmick_HOCMachine(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInteraction(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseStore();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimPlayRate();
    
};

