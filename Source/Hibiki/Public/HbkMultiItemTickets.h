#pragma once
#include "CoreMinimal.h"
#include "HbkItemTicket.h"
#include "HbkMultiItemTickets.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkMultiItemTickets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkItemTicket> Tickets;
    
    FHbkMultiItemTickets();
};

