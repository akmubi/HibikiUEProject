#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BPMRushSpectrumSettings.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BPMRushSpectrumSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    HIBIKI_API FHbkGimmick_BPMRushSpectrumSettings();
};

