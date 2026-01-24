#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EmSelfDestructionParam.h"
#include "HbkDamageParam.h"
#include "HbkFireEnemyCharacter.h"
#include "HbkSelfDestructionEnemyCharacter.generated.h"

class AActor;
class AController;
class UAnimSequenceBase;
class UDamageType;

UCLASS(Blueprintable)
class AHbkSelfDestructionEnemyCharacter : public AHbkFireEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SelfDestructionIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SelfDestructionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmSelfDestructionParam> SelfDestructionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SelfDestructionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfDestructionGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedRateDuringKorsica;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeRateNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackDuringKorsica;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChangeSpeedRateTime;
    
public:
    AHbkSelfDestructionEnemyCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginAttackNotice();
    
    UFUNCTION(BlueprintCallable)
    void NotifyOnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSelfDestruction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isCancelSelfDestruction() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SelectAnim(const FGameplayTagContainer& InDamageTags, FHbkDamageParam DamageParam);
    
};

