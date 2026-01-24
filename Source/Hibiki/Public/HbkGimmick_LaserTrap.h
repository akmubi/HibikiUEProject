#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AttackInterface.h"
#include "EHbkGimmick_LaserTrapType_t.h"
#include "EHbkGimmick_LaserTrap_AnimType_t.h"
#include "EHbkGimmick_LightEmissiveColorType_t.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_LaserTrapAssetInfo_t.h"
#include "HbkGimmick_LaserTrapAttackInfo_t.h"
#include "HbkGimmick_LaserTrapCameraInfo_t.h"
#include "HbkGimmick_LaserTrapTrackInfo_t.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_LaserTrap.generated.h"

class AActor;
class AController;
class AHbkCameraFocalPoint;
class AHbkGimmick_PhysicsObj;
class UDamageType;
class UHbkImproveAttackComponent;
class UHbkLaserRaticleComponent;
class UMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_LaserTrap : public AHbkGimmickBase, public IAttackInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_LaserTrap_NoticeRemove);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_LaserTrap_NoticeBegin);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_LaserTrap_MoveEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_LaserTrap_DeadStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_LaserTrap_DamagDone);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_LaserTrap_AttackStop);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrap_MoveEnd OnMoveAnimEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrap_NoticeBegin OnNoticeBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrap_NoticeRemove OnNoticeRemove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrap_AttackStop OnAttackStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrap_DamagDone OnDamagDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrap_DeadStart OnDeadStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool defaultTurnOnPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_LaserTrapType_t> trapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_LaserTrap_AnimType_t> AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkCameraFocalPoint> FocalCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_PhysicsObj> BulletClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletImpuct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RandomMinRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RandomMaxRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrapAttackInfo_t attackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrapTrackInfo_t trackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrapAssetInfo_t laserAssetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaserTrapCameraInfo_t CameraInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 bStateSave;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkImproveAttackComponent* pAttackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkLaserRaticleComponent* pRaticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* pDamageVictim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCameraFocalPoint> FocalCamera;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkGimmick_PhysicsObj>> BulletObjArray;
    
public:
    AHbkGimmick_LaserTrap(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTurnOnPower(TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> ColorType);
    
    UFUNCTION(BlueprintCallable)
    void SetStopWhenAttack(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetCamera(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent_LaserTrapDeadEvent(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent_LaserTrap(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent_BalloonLaserDeadEvent(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent_LaserTrap(int32 NoteNo, int32 Velocity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopWhenAttack() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationRate();
    

    // Fix for true pure virtual functions not being implemented
};

