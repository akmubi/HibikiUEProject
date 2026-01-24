#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkMGRhythmDungeon_WaveShopInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_WaveShopInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LinkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Challenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarpWaveName;
    
    HIBIKI_API FHbkMGRhythmDungeon_WaveShopInfo();
};

