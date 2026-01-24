#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkAttackVariationComponent.generated.h"

class UHbkPlayerAttackComboInfo;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkAttackVariationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayerAttackComboInfo* AttackComboInfoParam;
    
public:
    UHbkAttackVariationComponent(const FObjectInitializer& ObjectInitializer);

};

