#pragma once
#include "CoreMinimal.h"
#include "HbkDamagePartParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkDamagePartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartMaxHealth;
    
    FHbkDamagePartParam();
};

