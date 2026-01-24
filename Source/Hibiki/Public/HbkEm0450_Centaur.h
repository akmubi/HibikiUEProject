#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHbkNote.h"
#include "EHbkPartnerAttackType.h"
#include "EHbkPartnerType.h"
#include "HbkEm0450AvoidParam.h"
#include "HbkEnemyCharacter.h"
#include "Templates/SubclassOf.h"
#include "HbkEm0450_Centaur.generated.h"

class AActor;
class AController;
class AHbkEm0451;
class UDamageType;
class UHbkEquipComponent;
class UHbkStatusEffectComponent;
class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable)
class AHbkEm0450_Centaur : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WpAttachSocketComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* HandCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEquipComponent* EquipComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WpSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm0450AvoidParam AvoidParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> MacaronReactDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> CheckObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CheckStatusEffectiveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkStatusEffectComponent> StatusEffectComp;
    
public:
    AHbkEm0450_Centaur(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAvoidPAEvasion(int32 NoteCount, bool downBeat);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartSpinAttack(float TotalDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidPepAttack(bool bAvoid, EHbkNote NoteType, int32 NoteCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PerformAvoidPlayerAttack(int32 NoteCount, bool downBeat);
    
public:
    UFUNCTION(BlueprintCallable)
    void PepperAvoidAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStartAttackState();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginPartnerAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType AttackType);
    
    UFUNCTION(BlueprintCallable)
    void NotifyOnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWpSlotName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetWpAttachSocket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm0451* GetSpear() const;
    
    UFUNCTION(BlueprintCallable)
    void EndSpinAttack();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSpecifyDir(const FVector CheckDir, float CheckLength, bool bDebugDraw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostTakeDamageFromPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostTakeDamageFromPeppermint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostTakeDamageFromMacaron(FVector Dir, float FlightDuration, float ReactScale, float DownStateTime);
    
};

