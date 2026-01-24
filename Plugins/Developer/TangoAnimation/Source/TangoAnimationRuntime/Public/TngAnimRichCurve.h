#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "TngAnimRichCurve.generated.h"

USTRUCT(BlueprintType)
struct TANGOANIMATIONRUNTIME_API FTngAnimRichCurve : public FRichCurve {
    GENERATED_BODY()
public:
    FTngAnimRichCurve();
};

