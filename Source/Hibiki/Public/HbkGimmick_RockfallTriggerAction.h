#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickActionType.h"
#include "HbkGimmick_RockfallTriggerActionBeginOverlap.h"
#include "HbkGimmick_RockfallTriggerAction.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RockfallTriggerAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RockfallTriggerActionBeginOverlap BeginOverlap;
    
    HIBIKI_API FHbkGimmick_RockfallTriggerAction();
};

