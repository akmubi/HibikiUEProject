#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerChipType.h"
#include "HbkInventoryObject_PlayerItem.h"
#include "HbkInventoryObject_Chip.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class HIBIKI_API UHbkInventoryObject_Chip : public UHbkInventoryObject_PlayerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerChipType ChipType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AppendTextLine1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AppendTextLine2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> EffectedAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SubEffectedAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ChipImageList;
    
    UHbkInventoryObject_Chip();

};

