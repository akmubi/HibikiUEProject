#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkFireEnemyCharacter.h"
#include "HbkEm0740_Blaze.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UHbkImproveAttackComponent;

UCLASS(Blueprintable)
class AHbkEm0740_Blaze : public AHbkFireEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkImproveAttackComponent* BurningAttackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkCompForSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_FlameOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_FlameOff;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CounterAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FireWaveContinueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FireWaveAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisabledBurningCount_OnAttackRepelled;
    
public:
    AHbkEm0740_Blaze(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnToughDeactive();
    
    UFUNCTION(BlueprintCallable)
    void OnToughActive();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStartAttackState();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginRhythmParryAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledFireWave() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CounterAttackPlayedCheck();
    
};

