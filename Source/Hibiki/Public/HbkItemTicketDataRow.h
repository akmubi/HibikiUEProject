#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkItemTicketExchange.h"
#include "HbkItemTicketOption.h"
#include "HbkRandomPickItemEntry.h"
#include "HbkItemTicketDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkItemTicketDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkItemTicketExchange ExchangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PickCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomAddCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRandomPickItemEntry> RandomPickBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkItemTicketOption> RandomPickOption;
    
    FHbkItemTicketDataRow();
};

