#pragma once
#include "CoreMinimal.h"
#include "EHbkBNetModalType.generated.h"

UENUM(BlueprintType)
enum class EHbkBNetModalType : uint8 {
    Dummy,
    QuickAccount,
    Login,
    AccountExists,
    Agreements,
    UpdatedAgreement,
    LinkingSuccessful,
    Management,
    AccountHelp,
    CountMax,
};

