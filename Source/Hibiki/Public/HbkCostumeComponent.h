#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "EHbkCostumeSyncType.h"
#include "EHbkPartnerType.h"
#include "HbkCostumeMeshKitOrderList.h"
#include "HbkCostumeOnPostApplyCostumeDelegate.h"
#include "HbkCostumeOnPostApplyCostumeWithParamsDelegate.h"
#include "HbkLoadCostumeReq.h"
#include "HbkCostumeComponent.generated.h"

class UDataTable;
class UHbkCostumeMeshComponent;
class UHbkFaceShadowComponent;
class UObject;
class USkeletalMesh;
class USkinnedMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkCostumeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeOnPostApplyCostume OnPostApplyCostume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeOnPostApplyCostumeWithParams OnPostApplyCostumeWithParams;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeOnPostApplyCostume OnInitializedNoneCostume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultCostumeKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Costume_DT;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<EHbkCostumePart, TWeakObjectPtr<UHbkCostumeMeshComponent>> CostumeMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkinnedMeshComponent> MasterMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkFaceShadowComponent> FaceShadowCompPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkLoadCostumeReq> LoadCostumeReqListCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkCostumePart, FHbkCostumeMeshKitOrderList> MeshKitOrderMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkCostumePart, USkeletalMesh*> CustumeMeshCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumeSyncType SyncCostumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSyncAfterSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreOverlapCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeferredInitialize;
    
public:
    UHbkCostumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchFaceMaterialToMaskShadow(FName FaceMaterialSlotName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyPlayerCostumeKitChanged(const FGameplayTagContainer& NewCostumeKitTags);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPartnerCostumeChanged(EHbkPartnerType PartnerType, const FGameplayTag& NewCostumeTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetupDefaultCostumeBySystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMatchCurrentPartnerCostumes(UObject* WorldContextObject, EHbkPartnerType PartnerType, const FGameplayTagContainer& TestCostumeTags);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCostumeComponent(UHbkFaceShadowComponent* FaceShadowComp, EHbkCostumeSyncType SyncCostume, bool UseSyncAfterSpawn, bool IgnoreOverlapCostume);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDefaultCostume();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCostumeKit(const FGameplayTagContainer& NewCostumeTags);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCostume(const FGameplayTag& NewCostumeTag);
    
};

