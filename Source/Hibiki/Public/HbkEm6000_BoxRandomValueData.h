#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_BoxRandomValueInfo.h"
#include "HbkEm6000_BoxRandomValueData.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_BoxRandomValueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000_BoxRandomValueInfo> Infos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContinuousSelectionAdjustment;
    
    HIBIKI_API FHbkEm6000_BoxRandomValueData();
};

