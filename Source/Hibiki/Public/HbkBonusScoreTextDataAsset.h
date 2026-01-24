#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkScoreTextData.h"
#include "HbkBonusScoreTextDataAsset.generated.h"

UCLASS(Blueprintable)
class UHbkBonusScoreTextDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkScoreTextData> DrawTextDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartsSize;
    
    UHbkBonusScoreTextDataAsset();

};

