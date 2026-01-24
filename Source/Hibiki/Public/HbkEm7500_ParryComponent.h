#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkEm7500_ParryComponent.generated.h"

class UHbkBossSelectTagComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm7500_ParryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossSelectTagComponent* BossSelectTagComponent;
    
public:
    UHbkEm7500_ParryComponent(const FObjectInitializer& ObjectInitializer);

};

