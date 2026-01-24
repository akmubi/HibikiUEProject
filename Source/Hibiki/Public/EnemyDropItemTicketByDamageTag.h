#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkMultiItemTickets.h"
#include "EnemyDropItemTicketByDamageTag.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDropItemTicketByDamageTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets ItemTickets;
    
    HIBIKI_API FEnemyDropItemTicketByDamageTag();
};

