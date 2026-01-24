#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_BoxRandomTagInfo.h"
#include "HbkEm6000_BoxRandomTagData.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_BoxRandomTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000_BoxRandomTagInfo> Infos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContinuousSelectionAdjustment;
    
    HIBIKI_API FHbkEm6000_BoxRandomTagData();
};

