#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModePrintFilterGameType.h"
#include "PhotoModeFilterTypeRowBase.h"
#include "PhotoModeFilterPrintFilterParameter.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeFilterPrintFilterParameter : public FPhotoModeFilterTypeRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePrintFilterGameType Type;
    
    HIBIKI_API FPhotoModeFilterPrintFilterParameter();
};

