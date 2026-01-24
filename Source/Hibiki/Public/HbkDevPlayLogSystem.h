#pragma once
#include "CoreMinimal.h"
#include "HbkDevPlayLogLevelEntry.h"
#include "TngGameSystem.h"
#include "HbkDevPlayLogSystem.generated.h"

class UHbkDevPlayLogAsset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UHbkDevPlayLogSystem : public UTngGameSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProfileStatLogStartDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProfileStatLogSendIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStatGroupMemoryAggregation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkDevPlayLogLevelEntry> LevelEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkDevPlayLogAsset* Asset;
    
public:
    UHbkDevPlayLogSystem();

};

