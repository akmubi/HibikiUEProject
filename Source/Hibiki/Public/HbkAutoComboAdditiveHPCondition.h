#pragma once
#include "CoreMinimal.h"
#include "HbkAutoComboAdditiveHPCondition.generated.h"

USTRUCT(BlueprintType)
struct FHbkAutoComboAdditiveHPCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAdditiveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAdditiveRate;
    
    HIBIKI_API FHbkAutoComboAdditiveHPCondition();
};

