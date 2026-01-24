#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkGameplayTask_EVLaserBattleEventData.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLaserBattleEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurviveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EscapePlayerMovePointAgentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EscapePlayerMovePointCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EscapeMagnetAgentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EscapeMagnetCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSuicideTime;
    
    HIBIKI_API FHbkGameplayTask_EVLaserBattleEventData();
};

