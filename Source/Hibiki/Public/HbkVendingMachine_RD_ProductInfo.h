#pragma once
#include "CoreMinimal.h"
#include "EHbkVendingMachine_RD_ProductType.h"
#include "HbkMultiItemTickets.h"
#include "Templates/SubclassOf.h"
#include "HbkVendingMachine_RD_ProductInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkVendingMachine_RD_ProductInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkVendingMachine_RD_ProductType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets ItemTicketInfo;
    
    HIBIKI_API FHbkVendingMachine_RD_ProductInfo();
};

