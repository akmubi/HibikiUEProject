#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkGimmickManagerCustomEventDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGimmickManagerCustomEventDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    FHbkGimmickManagerCustomEventDataRow();
};

