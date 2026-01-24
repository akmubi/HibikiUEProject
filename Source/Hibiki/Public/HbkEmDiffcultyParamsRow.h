#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkEmAssistAttackDiffcultyParams.h"
#include "HbkEmDiffcultyParamsRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEmDiffcultyParamsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEmAssistAttackDiffcultyParams AssistParams;
    
    HIBIKI_API FHbkEmDiffcultyParamsRow();
};

