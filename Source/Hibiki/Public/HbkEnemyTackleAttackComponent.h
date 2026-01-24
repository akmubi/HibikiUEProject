#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TackleAttackDelegateDelegate.h"
#include "HbkEnemyTackleAttackComponent.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyTackleAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTackleAttackDelegate OnStartAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTackleAttackDelegate OnEndAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackLocationBBKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MoveCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDirection2D;
    
    UHbkEnemyTackleAttackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartAttack();
    
    UFUNCTION(BlueprintCallable)
    void EndAttack();
    
    UFUNCTION(BlueprintCallable)
    void CancelAttack(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackBeatEvent(int32 BeatCount);
    
};

