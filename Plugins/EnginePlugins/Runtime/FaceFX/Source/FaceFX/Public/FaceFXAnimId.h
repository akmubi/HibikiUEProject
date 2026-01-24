#pragma once
#include "CoreMinimal.h"
#include "FaceFXAnimId.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXAnimId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FACEFX_API FFaceFXAnimId();
};

