#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkTrainingRoomSkillTagData.generated.h"

USTRUCT(BlueprintType)
struct FHbkTrainingRoomSkillTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayerSkillTag_Battle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayerSkillTag_Inventry;
    
    HIBIKI_API FHbkTrainingRoomSkillTagData();
};

