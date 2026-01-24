#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkRhythmTower2Progress_PlayerParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTower2Progress_PlayerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Reverb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag EquipSPTag;
    
    HIBIKI_API FHbkRhythmTower2Progress_PlayerParam();
};

