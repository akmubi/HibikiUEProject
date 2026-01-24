#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkDamageCorrectionType.h"
#include "HbkDamageCorrection.generated.h"

USTRUCT(BlueprintType)
struct FHbkDamageCorrection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkDamageCorrectionType CorrectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorrectionValue;
    
    HIBIKI_API FHbkDamageCorrection();
};

