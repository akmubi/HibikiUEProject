#pragma once
#include "CoreMinimal.h"
#include "HbkComboCheckInfo.h"
#include "HbkComboCheckInfoList.generated.h"

USTRUCT(BlueprintType)
struct FHbkComboCheckInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkComboCheckInfo> ComboList;
    
    HIBIKI_API FHbkComboCheckInfoList();
};

