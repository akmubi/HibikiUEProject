#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkEnvHighlightFadeType.h"
#include "HbkEnvHighlight2Data.h"
#include "HbkEnvHighlight2DataAsset.generated.h"

UCLASS(Blueprintable)
class UHbkEnvHighlight2DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEnvHighlightFadeType, FHbkEnvHighlight2Data> Data;
    
    UHbkEnvHighlight2DataAsset();

};

