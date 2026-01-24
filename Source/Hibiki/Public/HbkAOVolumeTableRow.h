#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkAOVolumeTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkAOVolumeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOVolumeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOVolumeLinesFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOVolumeLinesDarkness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOVolumeFadeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AOVolumeFadeDistance;
    
    HIBIKI_API FHbkAOVolumeTableRow();
};

