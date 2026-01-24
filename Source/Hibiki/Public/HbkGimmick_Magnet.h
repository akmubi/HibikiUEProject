#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_Magnet_SaveType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_Magnet_SoundInfo_t.h"
#include "HbkGimmick_Magnet_VariableInfo_t.h"
#include "HbkGimmick_Magnet_VfxInfo_t.h"
#include "MagneticPointActionDelegateDelegate.h"
#include "MagneticPointDetailDelegateDelegate.h"
#include "HbkGimmick_Magnet.generated.h"

class AActor;
class AController;
class AHbkPlayerCharacterBase;
class UDamageType;
class UHbkMagneticPointComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_Magnet : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagneticPointDetailDelegate OnMagnetHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagneticPointActionDelegate OnMagnetReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagneticPointActionDelegate OnMagnetPlayerLanding;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_Magnet_SaveType bSaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool barrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer breakBarrierActivateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer breakBarrierDeactivateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_Magnet_SoundInfo_t soundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_Magnet_VfxInfo_t vfxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_Magnet_VariableInfo_t VariableInfo;
    
public:
    AHbkGimmick_Magnet(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMagnetPointEnable(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSyncBeatEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyGimmick(AHbkGimmickBase* GimmickBase);
    
    UFUNCTION(BlueprintCallable)
    void OnReachMagnet(AHbkPlayerCharacterBase* pPlayer, UHbkMagneticPointComponent* pMagneticComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnPostResetPlayerPosition(const FTransform& Transform, const FGameplayTagContainer& RestartPointTags);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLanding();
    
    UFUNCTION(BlueprintCallable)
    void OnHitMagnet(AHbkPlayerCharacterBase* pPlayer, UHbkMagneticPointComponent* pMagneticComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
};

