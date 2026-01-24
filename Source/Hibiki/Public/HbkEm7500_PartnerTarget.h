#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AttackInterface.h"
#include "HbkEm7500_PartnerTarget.generated.h"

class UHbkDamageComponent;
class UHbkPartnerAppearPointComponent;
class UHbkPartnerTargetPointComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm7500_PartnerTarget : public AActor, public IAttackInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPartnerTargetPointComponent* PartnerTargetPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPartnerAppearPointComponent* PartnerAppearPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* DamageComponent;
    
    AHbkEm7500_PartnerTarget(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

