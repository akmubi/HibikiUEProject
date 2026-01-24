#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_bg0180_GateType_t.h"
#include "EHbkGimmick_bg0180_SaveType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0180_LightMaterialInfo_t.h"
#include "HbkGimmick_bg0180_OverrideMaterialInfo_t.h"
#include "HbkGimmick_bg0180_SoundInfo_t.h"
#include "HbkGimmick_bg0180_VfxInfo_t.h"
#include "HbkGimmick_bg0180.generated.h"

class AActor;
class UBoxComponent;
class UMeshComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0180 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGimmickBg0180_ActivateDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_bg0180_GateType_t> gateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticOffWhilePlayLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotOpenWhileLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AutomaticCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer openActivateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer closeActivateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool waitBarSyncActivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickBg0180_ActivateDelegate OnGateOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickBg0180_ActivateDelegate OnGateClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector amountPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0180_LightMaterialInfo_t LightMaterialInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0180_OverrideMaterialInfo_t OverrideMaterialInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0180_SoundInfo_t soundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0180_VfxInfo_t vfxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg0180_SaveType bSaveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg0180_SaveType bSaveLockState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMeshDoorR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMeshDoorL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMeshDoorU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMeshDoorD;
    
public:
    AHbkGimmick_bg0180(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockDoor(bool PlaySE);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDefaultEmissiveColor();
    
    UFUNCTION(BlueprintCallable)
    void SetActivateEmissiveColor();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncActivate(const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnBarSyncAnimActivate(const int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockDoor(bool PlaySE);
    
};

