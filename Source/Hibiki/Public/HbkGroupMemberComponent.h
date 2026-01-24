#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkGroupMemberComponent.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkGroupMemberComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BBKeyName_AttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BBKeyName_TargetDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseBattleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackFrequencyRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinuousAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScaleType;
    
public:
    UHbkGroupMemberComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginDamageState(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContinuousAttackable();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScaleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetContinuousAttackableCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseBattleDistance() const;
    
};

