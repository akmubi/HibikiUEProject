#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkNote.h"
#include "HbkDamageInterface.h"
#include "HbkEnemyWeapon.h"
#include "HbkReceiveAttackInterface.h"
#include "HbkEm0451.generated.h"

class AActor;
class AController;
class AHbkEm0450_Centaur;
class UAnimSequenceBase;
class UCapsuleComponent;
class UDamageType;
class UHbkEm0451_AnimInstance;
class UHbkGrantBarrierComponent;
class UHbkRepulsionComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHbkEm0451 : public AHbkEnemyWeapon, public IHbkDamageInterface, public IHbkReceiveAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ThrowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote ThrowCoolTimeNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThrowCoolTimeNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReturnSpear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRepulsionComponent* HbkRepulsion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* WpCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm0450_Centaur> OwnerCentaur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGrantBarrierComponent* GrantBarrierComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote DelayBarrierRhythm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayBarrierNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnAddHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThrowMoveXYCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThrowMoveZCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowTargetOffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
    
public:
    AHbkEm0451(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateThrowMove(float DeltaT);
    
    UFUNCTION(BlueprintCallable)
    void UpdateReturnMove(float DeltaT);
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrowSpear();
    
    UFUNCTION(BlueprintCallable)
    void StartGrantBarrier();
    
    UFUNCTION(BlueprintCallable)
    void SetCentaur(AHbkEm0450_Centaur* Centaur);
    
    UFUNCTION(BlueprintCallable)
    void ReturnSpear();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapWpCollision(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAttackNotice();
    
    UFUNCTION(BlueprintCallable)
    void Notify_OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowingSpear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWpAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkEm0451_AnimInstance* GetWpAnimInstance() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSpearTargetLocation(FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMovingXYDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthSpear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBarrierGranted() const;
    
    UFUNCTION(BlueprintCallable)
    void EndGrantBarrier();
    
    UFUNCTION(BlueprintCallable)
    bool DetachFromOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanThrowSpear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartThrowSpear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartReturnSpear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetCentaur(AHbkEm0450_Centaur* Centaur);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_AttachToOwner(bool bResult);
    
    UFUNCTION(BlueprintCallable)
    bool AttachToOwner();
    
    UFUNCTION(BlueprintCallable)
    void AddRotateSpear(FRotator AddRot, FRotator FinRot, float InterpRate, float InterpStrength, float TotalDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddDamageSpear(const float AddDamage);
    

    // Fix for true pure virtual functions not being implemented
};

