#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkVendingMachine_RD_ProductAppearActor.h"
#include "HbkVendingMachine_RD_ProductCanRate.h"
#include "HbkVendingMachine_RD_ProductItemTickets.h"
#include "HbkVendingMachine_RD_ProductDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkVendingMachine_RD_ProductDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CansNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkVendingMachine_RD_ProductCanRate> Cans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkVendingMachine_RD_ProductItemTickets> ItemTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkVendingMachine_RD_ProductAppearActor> AppearActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverflowCans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverflowCansNum;
    
    FHbkVendingMachine_RD_ProductDataRow();
};

