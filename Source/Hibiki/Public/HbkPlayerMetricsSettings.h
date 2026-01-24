#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkAchievementEntry.h"
#include "HbkChallengeEntry.h"
#include "HbkPlayerStatEntry.h"
#include "HbkPlayerStatExtensionGDKEntry.h"
#include "HbkPlayerStatExtensionPS5Entry.h"
#include "HbkPlayerMetricsSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class HIBIKI_API UHbkPlayerMetricsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPlayerStatEntry> StatEntries;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPlayerStatExtensionPS5Entry> StatPS5ExtensionEntries;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPlayerStatExtensionGDKEntry> StatGDKExtensionEntries;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkAchievementEntry> AchievementEntries;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkChallengeEntry> ChallengeEntries;
    
    UHbkPlayerMetricsSettings();

};

