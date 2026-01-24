#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "HbkSpecialAttackStagingDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkSpecialAttackStagingDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetTransform;
    
    HIBIKI_API FHbkSpecialAttackStagingDataRow();
};

