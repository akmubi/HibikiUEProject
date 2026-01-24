#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_bg0200SaveType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0200.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0200 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGimmickBg0200_ActivateDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickBg0200_ActivateDelegate OnBg0200_Activate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickBg0200_ActivateDelegate OnBg0200_BarSyncActivate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg0200SaveType bSaveType;
    
public:
    AHbkGimmick_bg0200(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnBg0200_BarEvent(int32 Count, bool downBeat);
    
};

