#pragma once
#include "CoreMinimal.h"
#include "EHbkPurchaseResult.generated.h"

UENUM(BlueprintType)
enum class EHbkPurchaseResult : uint8 {
    UnknownError,
    Success,
    Purchased,
    LackOfMoney,
    LackOfCircuit,
    LackOfMoneyAndCircuit,
    LackOfTicket,
    HiddenProduct,
    PurchaseFailed,
    ProductError,
    SellFailed,
};

