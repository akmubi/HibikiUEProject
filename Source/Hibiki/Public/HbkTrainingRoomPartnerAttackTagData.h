#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkPartnerAttackType.h"
#include "HbkTrainingRoomPartnerAttackTagData.generated.h"

USTRUCT(BlueprintType)
struct FHbkTrainingRoomPartnerAttackTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerAttackType, FGameplayTag> AttackTagMap;
    
    HIBIKI_API FHbkTrainingRoomPartnerAttackTagData();
};

