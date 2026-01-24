#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeLineArtThresholdGameType.h"
#include "PhotoModeFilterTypeRowBase.h"
#include "PhotoModeFilterLineArtThresholdParameter.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeFilterLineArtThresholdParameter : public FPhotoModeFilterTypeRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeLineArtThresholdGameType Type;
    
    HIBIKI_API FPhotoModeFilterLineArtThresholdParameter();
};

