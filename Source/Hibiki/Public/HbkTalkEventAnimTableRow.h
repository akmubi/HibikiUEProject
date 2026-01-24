#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkTalkEventAnimTableRow.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkTalkEventAnimTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> AnimAsset;
    
    HIBIKI_API FHbkTalkEventAnimTableRow();
};

