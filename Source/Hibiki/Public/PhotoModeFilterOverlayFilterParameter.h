#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeOverlayFilterGameType.h"
#include "PhotoModeFilterTypeRowBase.h"
#include "PhotoModeFilterOverlayFilterParameter.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeFilterOverlayFilterParameter : public FPhotoModeFilterTypeRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeOverlayFilterGameType Type;
    
    HIBIKI_API FPhotoModeFilterOverlayFilterParameter();
};

