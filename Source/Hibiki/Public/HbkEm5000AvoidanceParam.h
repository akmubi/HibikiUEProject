#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000NoteTime.h"
#include "HbkEm5000AvoidanceParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm5000AvoidanceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000NoteTime CoolTimeWhenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000NoteTime CoolTimeWhenNotActivated;
    
    FHbkEm5000AvoidanceParam();
};

