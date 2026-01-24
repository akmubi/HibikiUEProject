#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "HbkBTDecorator_BossSelectTag.generated.h"

class AAIController;
class AActor;
class UHbkBossSelectTagComponent;

UCLASS(Blueprintable)
class HIBIKI_API UHbkBTDecorator_BossSelectTag : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkBossSelectTagComponent* SelectTagCompOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tag;
    
public:
    UHbkBTDecorator_BossSelectTag();

};

