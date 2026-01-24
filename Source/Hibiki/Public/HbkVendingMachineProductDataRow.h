#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkVendingMachineProductAppearActor.h"
#include "HbkVendingMachineProductCanRate.h"
#include "HbkVendingMachineProductItemTickets.h"
#include "HbkVendingMachineProductDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkVendingMachineProductDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CansNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkVendingMachineProductCanRate> Cans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkVendingMachineProductItemTickets> ItemTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkVendingMachineProductAppearActor> AppearActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverflowCans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverflowCansNum;
    
    FHbkVendingMachineProductDataRow();
};

