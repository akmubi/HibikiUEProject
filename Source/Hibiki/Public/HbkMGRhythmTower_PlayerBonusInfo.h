#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmTower_BonusTagInfo.h"
#include "HbkMGRhythmTower_PlayerBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_PlayerBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParryPerfectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginJamComboTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatHitPerfectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JustDodgeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeCounterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParryCounterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMGRhythmTower_BonusTagInfo> TagInfoArray;
    
    HIBIKI_API FHbkMGRhythmTower_PlayerBonusInfo();
};

