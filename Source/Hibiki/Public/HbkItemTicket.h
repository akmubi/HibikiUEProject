#pragma once
#include "CoreMinimal.h"
#include "HbkItemTicket.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkItemTicket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TicketName;
    
    FHbkItemTicket();
};

