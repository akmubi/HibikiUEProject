#pragma once
#include "CoreMinimal.h"
#include "HbkHighlightData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkHighlightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyRSSTimeRate;
    
    HIBIKI_API FHbkHighlightData();
};

