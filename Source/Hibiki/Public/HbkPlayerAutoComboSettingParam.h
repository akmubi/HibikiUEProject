#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkAutoComboBaseParam.h"
#include "HbkPlayerAutoComboSettingParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerAutoComboSettingParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAutoComboBaseParam Data;
    
    HIBIKI_API FHbkPlayerAutoComboSettingParam();
};

