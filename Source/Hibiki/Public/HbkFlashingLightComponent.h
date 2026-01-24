#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EHbkFlashingLightType_t.h"
#include "HbkFlashLightAttackTagInfo_t.h"
#include "HbkFlashLightComponentMaterialFlash_t.h"
#include "HbkFlashLightComponentMeshOpacity_t.h"
#include "HbkFlashingLightComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkFlashingLightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkFlashingLightType_t> flashingLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkFlashLightComponentMaterialFlash_t materialFlashParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkFlashLightComponentMeshOpacity_t meshOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFlashLightComponentMaterialFlash_t> MaterialInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFlashLightComponentMeshOpacity_t> opacityInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFlashLightAttackTagInfo_t> AttackTagInfoArray;
    
    UHbkFlashingLightComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSignificanceStateChanged(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickDeactivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickActivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickActivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceSuccess();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetValue(float TimeScale);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnemyAtk_Event(int32 ActionType);
    
    UFUNCTION(BlueprintCallable)
    void Button_Event(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void AtkTag_Event(int32 ActionType, FGameplayTag Tag);
    
};

