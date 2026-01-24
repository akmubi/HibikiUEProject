#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AreaAttackDelegateDelegate.h"
#include "HbkAttackHitShapeInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkEnemyAreaAttackComponent.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class UParticleSystem;
class UTngDamageType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyAreaAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaAttackDelegate OnStartShowArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaAttackDelegate OnWaitEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEffectAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AreaEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitNoteNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAttackHitShapeInfo HitShapeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttackOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrawAreaDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocationLockWhenAttacking;
    
public:
    UHbkEnemyAreaAttackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartAreaAttack(const FVector& Pos);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAbortAttackState(AHbkEnemyCharacter* EmPawn, AHbkEnemyAIController* EmAI);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAreaAttack();
    
    UFUNCTION(BlueprintCallable)
    void EndAreaAttack();
    
    UFUNCTION(BlueprintCallable)
    void CancelAreaAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackBeatEvent(int32 BeatCount);
    
};

