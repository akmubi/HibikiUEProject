#pragma once
#include "CoreMinimal.h"
#include "HbkItemTicket.h"
#include "HbkMGRhythmTower_ItemAssetInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_ItemAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PriceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkItemTicket ItemTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverChargeItem;
    
    HIBIKI_API FHbkMGRhythmTower_ItemAssetInfo();
};

