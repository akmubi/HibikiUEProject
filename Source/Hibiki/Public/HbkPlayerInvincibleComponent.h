#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerInvincibleDelegateDelegate.h"
#include "HbkPlayerInvincibleComponent.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkPlayerInvincibleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInvincibleDelegate OnBeginAfterDamageInvincible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInvincibleDelegate OnEndAfterDamageInvincible;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvisibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DParryInvisibleEffect;
    
public:
    UHbkPlayerInvincibleComponent(const FObjectInitializer& ObjectInitializer);

};

