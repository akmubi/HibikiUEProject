#pragma once
#include "CoreMinimal.h"
#include "HbkEmStrongFly_TiredDownData.generated.h"

USTRUCT(BlueprintType)
struct FHbkEmStrongFly_TiredDownData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountMax;
    
    HIBIKI_API FHbkEmStrongFly_TiredDownData();
};

