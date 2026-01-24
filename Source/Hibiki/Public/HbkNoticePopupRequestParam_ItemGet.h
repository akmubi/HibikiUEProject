#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkNoticePopupRequestParam.h"
#include "HbkNoticePopupRequestParam_ItemGet.generated.h"

USTRUCT(BlueprintType)
struct FHbkNoticePopupRequestParam_ItemGet : public FHbkNoticePopupRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag InventoryId;
    
    HIBIKI_API FHbkNoticePopupRequestParam_ItemGet();
};

