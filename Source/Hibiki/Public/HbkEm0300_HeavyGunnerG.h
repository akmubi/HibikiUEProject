#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "Em0300DamageBlockDelegate.h"
#include "HbkEnemyCharacter.h"
#include "Templates/SubclassOf.h"
#include "HbkEm0300_HeavyGunnerG.generated.h"

class AActor;
class UAnimMontage;
class UAnimSequenceBase;
class UDamageType;
class UHbkCharacterAnimInstance;

UCLASS(Blueprintable)
class AHbkEm0300_HeavyGunnerG : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm0300DamageBlock ChaiDamageBlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm0300DamageBlock PepDamageBlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm0300DamageBlock MacaronDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> IgnoreDamageTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> FirstBreakBoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> SecondBreakBoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> FinBreakBoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotationUpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationUpperBodySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsightVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedUpperBodyRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingShootingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAirShooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingShootingMontageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CalcShootingAimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CalcShootingAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimSequenceBase> DamageReactionAnimUpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> CurrentDamageUBMT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingDamageReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* FallingAnim;
    
public:
    AHbkEm0300_HeavyGunnerG(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartFallArea();
    
    UFUNCTION(BlueprintCallable)
    void StartFall(float MaxGravityScale, float LerpTime);
    
    UFUNCTION(BlueprintCallable)
    void ShieldInvincible();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetIsActorFlag(bool TargetIsActorFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetSuspensionInsightVal(float NewInsightVal);
    
    UFUNCTION(BlueprintCallable)
    void SetShootingMontageIndex(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void SetRotTargetLocation(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationUpperBodySpeed(float NewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationUpperBodyFlag(bool isRotationUpperBody);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayingShootingAnim(bool isPlayingAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetFinalYawUpperBody(float FinYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentYawUpperBody(float CurrentYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetCalcShootingAimtYaw(float NewYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetCalcShootingAimtPitch(float NewPitch);
    
    UFUNCTION(BlueprintCallable)
    void SetAirShooting(bool isAirShooting);
    
    UFUNCTION(BlueprintCallable)
    void ResetLaunchCount();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Notify_PlayDamageAnimation(UHbkCharacterAnimInstance* AnimInstance, float PlayRate);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_HeavyGunnerGDied();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HideBreakShieldParts(const TArray<FName>& HideBoneNameList, TEnumAsByte<EPhysBodyOp> PhysicsBodyOption);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetIsActorFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuspensionInsightVal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShootingMontageIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRotTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRotTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationUpperBodySpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRotationUpperBodyFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLaunchCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlayingShootingAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFinalYawUpperBody() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentYawUpperBody() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCalcShootingYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCalcShootingPitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAirShooting() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChallengeDamageBlock(AActor* DamageCauser, const UDamageType* DamageType, float DamageValue);
    
public:
    UFUNCTION(BlueprintCallable)
    float CalcAngleYawWithTheTargetPM(const AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    float CalcAngleWithTheTarget(const AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    float CalcAngleWithTheLocation(const FVector& AtLocation);
    
    UFUNCTION(BlueprintCallable)
    float CalcAnglePitchWithTheTarget(const AActor* TargetActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool BreakShieldParts(const TArray<FName>& BreakBoneNameList);
    
    UFUNCTION(BlueprintCallable)
    bool BreakAndHideShieldParts(const TMap<FName, bool>& BreakBoneList, TEnumAsByte<EPhysBodyOp> PhysicsBodyOption);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddLaunchCount();
    
};

