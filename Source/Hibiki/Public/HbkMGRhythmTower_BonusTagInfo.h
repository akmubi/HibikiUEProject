#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkMGRhythmTower_BonusTagInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_BonusTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    HIBIKI_API FHbkMGRhythmTower_BonusTagInfo();
};

