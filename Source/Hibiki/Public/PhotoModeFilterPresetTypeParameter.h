#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModePresetGameType.h"
#include "PhotoModeFilterTypeRowBase.h"
#include "PhotoModeFilterPresetTypeParameter.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeFilterPresetTypeParameter : public FPhotoModeFilterTypeRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePresetGameType Type;
    
    HIBIKI_API FPhotoModeFilterPresetTypeParameter();
};

