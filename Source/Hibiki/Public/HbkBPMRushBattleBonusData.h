#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushComboBonusData.h"
#include "HbkBPMRushParriesBonusData.h"
#include "HbkBPMRushBattleBonusData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushBattleBonusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ComboBonusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushComboBonusData> ComboBonusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParriesBonusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushParriesBonusData> ParriesBonusData;
    
    HIBIKI_API FHbkBPMRushBattleBonusData();
};

