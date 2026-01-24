#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmTowerStoreRandomResultRarityType.h"
#include "HbkRhythmTowerStoreRandomResultItemInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHbkRhythmTowerStoreRandomResultItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRhythmTowerStoreRandomResultRarityType RarityType;
    
    HIBIKI_API FHbkRhythmTowerStoreRandomResultItemInfo();
};

