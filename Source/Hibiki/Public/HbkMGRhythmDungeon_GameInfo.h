#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkMGRhythmDungeon_GameInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_GameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayTag> ProductTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayTag> ChaosTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayTag> ChallengeTagList;
    
    HIBIKI_API FHbkMGRhythmDungeon_GameInfo();
};

