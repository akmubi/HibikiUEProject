#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "HbkPlayerRecoveryParamRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerRecoveryParamRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RecoveryParamTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryAmount;
    
    HIBIKI_API FHbkPlayerRecoveryParamRow();
};

