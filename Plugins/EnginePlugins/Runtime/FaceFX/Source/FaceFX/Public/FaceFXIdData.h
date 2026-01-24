#pragma once
#include "CoreMinimal.h"
#include "FaceFXIdData.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXIdData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FACEFX_API FFaceFXIdData();
};

