#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "HbkMultiItemTickets.h"
#include "HbkItemTicketByTagDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkItemTicketByTagDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeatHitTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets ItemTickets;
    
    FHbkItemTicketByTagDataRow();
};

