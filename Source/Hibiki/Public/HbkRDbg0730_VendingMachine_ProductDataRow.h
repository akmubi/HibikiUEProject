#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkRDbg0730_VendingMachine_ProductAppearActor.h"
#include "HbkRDbg0730_VendingMachine_ProductCanRate.h"
#include "HbkRDbg0730_VendingMachine_ProductItemTickets.h"
#include "HbkRDbg0730_VendingMachine_ProductDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRDbg0730_VendingMachine_ProductDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CansNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRDbg0730_VendingMachine_ProductCanRate> Cans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRDbg0730_VendingMachine_ProductItemTickets> ItemTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRDbg0730_VendingMachine_ProductAppearActor> AppearActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverflowCans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverflowCansNum;
    
    FHbkRDbg0730_VendingMachine_ProductDataRow();
};

