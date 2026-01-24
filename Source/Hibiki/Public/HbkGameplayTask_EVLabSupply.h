#pragma once
#include "CoreMinimal.h"
#include "FHbkGameplayTask_EVLabActorType.h"
#include "HbkGameplayTask_EVLabEnemySupply.h"
#include "HbkGameplayTask_EVLabEvent.h"
#include "HbkGameplayTask_EVLabLaserTrapSupply.h"
#include "HbkGameplayTask_EVLabSucceededParryEvent.h"
#include "HbkGameplayTask_EVLabTutorial.h"
#include "HbkGameplayTask_EVLabSupply.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabSupply {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabActorType ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabLaserTrapSupply LaserTrapSupply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabEnemySupply EnemySupply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabEvent PrepareEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabEvent BeforeSupplyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabEvent SuppiliedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabSucceededParryEvent SucceededParryEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabEvent FailedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabEvent DiedEnemyGroupEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabTutorial Tutorial;
    
    HIBIKI_API FHbkGameplayTask_EVLabSupply();
};

