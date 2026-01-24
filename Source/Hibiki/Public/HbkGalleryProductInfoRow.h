#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EHbkGalleryProductCategory.h"
#include "HbkGalleryProductInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkGalleryProductInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGalleryProductCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Price;
    
    HIBIKI_API FHbkGalleryProductInfoRow();
};

