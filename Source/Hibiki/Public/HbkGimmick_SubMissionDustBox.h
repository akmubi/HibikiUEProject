#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SubMissionDustBoxCorrectDust.h"
#include "HbkGimmick_SubMissionDustBoxDust.h"
#include "HbkGimmick_SubMissionDustBoxProtrude.h"
#include "HbkGimmick_SubMissionDustBox.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(Blueprintable)
class AHbkGimmick_SubMissionDustBox : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDrawCorrectDustDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCorrectDustBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SubMissionDustBoxCorrectDust CorrectDust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_SubMissionDustBoxDust> DustList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SubMissionDustBoxProtrude Protrude;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawCorrectDustDelegate OnDrawCorrectDust;
    
public:
    AHbkGimmick_SubMissionDustBox(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartSubMission();
    
    UFUNCTION(BlueprintCallable)
    void OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& HitResult, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnLastProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnEndSubMission();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageAnimation();
    
};

