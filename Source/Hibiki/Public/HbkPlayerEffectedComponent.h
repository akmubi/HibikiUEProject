#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "HbkPlayerBurnDamageInfo.h"
#include "HbkPlayerChipSlotInfo.h"
#include "HbkPlayerLifeTankInfo.h"
#include "PlayerEffectedActionDelegateDelegate.h"
#include "HbkPlayerEffectedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerEffectedComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerEffectedActionDelegate OnTimingShakeStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPlayerLifeTankInfo LifeTankInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPlayerChipSlotInfo ChipSlotInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPlayerBurnDamageInfo BurnDamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> RecoverParamMap;
    
public:
    UHbkPlayerEffectedComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBurnDamageBeatEvent(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAccumulatedLifeTankRate(TArray<float>& RateList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccumulatedLifeTankCount() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddLifeTankPiece();
    
    UFUNCTION(BlueprintCallable)
    void AddLifeTankNum();
    
    UFUNCTION(BlueprintCallable)
    void AddChipSlotNum();
    
};

