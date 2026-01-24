#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMultiItemTickets.h"
#include "KaleStatueDropItemRow.generated.h"

USTRUCT(BlueprintType)
struct FKaleStatueDropItemRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets NormalAttackTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets JustTimingAttackTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets BeatHitTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets BreakTickets;
    
    HIBIKI_API FKaleStatueDropItemRow();
};

