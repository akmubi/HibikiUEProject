#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerAttackType.h"
#include "EHbkPartnerType.h"
#include "HbkEm6000_BehaviorBaseComponent.h"
#include "HbkEm6000_BehaviorHumanBaseComponent.generated.h"

class AHbkPlayerCharacterBase;
class UHbkMagneticPointComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_BehaviorHumanBaseComponent : public UHbkEm6000_BehaviorBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckTimeForEscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageCountForEscape;
    
public:
    UHbkEm6000_BehaviorHumanBaseComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint);
    
    UFUNCTION(BlueprintCallable)
    bool OnContinuousDamageEventForEscape();
    
    UFUNCTION(BlueprintCallable)
    bool OnBeginPartnerAttackEventForEscapeFromPeppermintAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType PartnerAttackType);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForWaitQuarter(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForEscapeShot(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForEscapeEnd(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForEscape(float DeltaTime, float ElapsedTime);
    
};

