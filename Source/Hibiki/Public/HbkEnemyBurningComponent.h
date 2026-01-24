#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkEnemyBurningEffectData.h"
#include "HbkEnemyBurningSoundData.h"
#include "HbkEnemyBurningComponent.generated.h"

class UAkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyBurningComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemyBurningEffectData> FireVFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyBurningSoundData CommonSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTouchAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TouchAttackComponentTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkComponent> AkCompRTPC;
    
public:
    UHbkEnemyBurningComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisabledChangeBurning(bool bDisabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetBurningState(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabledChangeBurningState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBurningState() const;
    
    UFUNCTION(BlueprintCallable)
    void EnabledBurning();
    
    UFUNCTION(BlueprintCallable)
    void DisabledBurning();
    
};

