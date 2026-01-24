#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "HbkCameraAppendParam.h"
#include "HbkEnemyCharacter.h"
#include "HbkTalkContext.h"
#include "Templates/SubclassOf.h"
#include "HbkEm0820_Armadillo.generated.h"

class AHbkEnemyAIController;
class AHbkProjectile_Em0821SubArm;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0820_Armadillo : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TipsTalkA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TipsTalkB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftArmorBreakVFXAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightArmorBreakVFXAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> ArmorDamageVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pArmorDamageVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> ArmorBreakAllVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pArmorBreakAllVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> LaserMainVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pLaserMainVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LaserMainPSComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> LaserHitVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pLaserHitVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LaserHitPSComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserAfterImageSize_ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> LaserTraceObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkProjectile_Em0821SubArm> SubArmClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubarmEnableHealthRate;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkProjectile_Em0821SubArm>> SubArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SubArmAttachSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SubArmHiddenSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSubarmTrackingToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SubArmStunTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceVisibleSubArmMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceCloseSubArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCameraWideview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraAppendParam SubarmRunningCamParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmoredAttackCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorBreakedAttackCoolTime;
    
public:
    AHbkEm0820_Armadillo(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Update_CameraWideview(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TipsTalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void StartTipsTalk();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSubarmStunTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSubarmForceVisibility(bool NewVisiblity);
    
    UFUNCTION(BlueprintCallable)
    void SetSubarmForceClose(bool NewCloseOpt);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAttackLocationParam(FVector TargetLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCapsuleSize(float rad, float Height);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndDamageState(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBreakShieldAll();
    
    UFUNCTION(BlueprintCallable)
    void PlaySubrmStartupAction(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void PlayArmorBreakVFX(FName AttachSocketName, bool IsBreakAll);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSubarmTarckingToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubarmScaleOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceVisibleSubarm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceCloseSubarm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSubArm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSubArm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubarmEnabledFlag() const;
    
    UFUNCTION(BlueprintCallable)
    AHbkProjectile_Em0821SubArm* GetSubarmActor(int32 Index);
    
};

