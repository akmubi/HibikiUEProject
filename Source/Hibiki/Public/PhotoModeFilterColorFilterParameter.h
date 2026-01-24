#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeColorFilterGameType.h"
#include "PhotoModeFilterTypeRowBase.h"
#include "PhotoModeFilterColorFilterParameter.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeFilterColorFilterParameter : public FPhotoModeFilterTypeRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeColorFilterGameType Type;
    
    HIBIKI_API FPhotoModeFilterColorFilterParameter();
};

