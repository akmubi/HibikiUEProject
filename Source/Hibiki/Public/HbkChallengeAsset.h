#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkChallengeAsset.generated.h"

class UHbkHideOutChallengeAsset;
class UHbkHideOutExtraChallengeAsset;

UCLASS(Blueprintable)
class UHbkChallengeAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkHideOutChallengeAsset* HideOutChallengeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkHideOutExtraChallengeAsset* HideOutExtraChallengeAsset;
    
    UHbkChallengeAsset();

};

