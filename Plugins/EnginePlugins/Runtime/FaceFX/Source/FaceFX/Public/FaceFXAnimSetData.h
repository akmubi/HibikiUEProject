#pragma once
#include "CoreMinimal.h"
#include "FaceFXAnimData.h"
#include "FaceFXAnimSetData.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXAnimSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFaceFXAnimData> Animations;
    
    FACEFX_API FFaceFXAnimSetData();
};

