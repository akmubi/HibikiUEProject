#pragma once
#include "CoreMinimal.h"
#include "EHbkShopMenuCategoryState.h"
#include "HbkShopMenuStatePreset.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkShopMenuStatePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkShopMenuCategoryState Store_Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkShopMenuCategoryState Store_Partner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkShopMenuCategoryState Store_SpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkShopMenuCategoryState Store_PowerUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkShopMenuCategoryState Store_Chip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkShopMenuCategoryState Store_ChipCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkShopMenuCategoryState Equip_SpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkShopMenuCategoryState Equip_Chip;
    
    FHbkShopMenuStatePreset();
};

