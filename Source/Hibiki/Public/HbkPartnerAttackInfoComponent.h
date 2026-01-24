#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkPartnerAttackInfoComponent.generated.h"

class UHbkPartnerAttackInfo;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPartnerAttackInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPartnerAttackInfo* AttackInfoParam;
    
public:
    UHbkPartnerAttackInfoComponent(const FObjectInitializer& ObjectInitializer);

};

