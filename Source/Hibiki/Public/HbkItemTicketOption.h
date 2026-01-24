#pragma once
#include "CoreMinimal.h"
#include "EHbkItemTicketOptionCondition.h"
#include "HbkRandomPickItemEntry.h"
#include "HbkItemTicketOption.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkItemTicketOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkItemTicketOptionCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRandomPickItemEntry> RandomPickBox;
    
    FHbkItemTicketOption();
};

