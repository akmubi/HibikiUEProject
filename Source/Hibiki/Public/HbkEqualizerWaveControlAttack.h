#pragma once
#include "CoreMinimal.h"
#include "HbkEqualizerWaveControlAttack.generated.h"

class UHbkImproveAttackComponent;

USTRUCT(BlueprintType)
struct FHbkEqualizerWaveControlAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkImproveAttackComponent* AttackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkImproveAttackComponent*> AttackComp2nd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkImproveAttackComponent*> AttackComp3th;
    
    HIBIKI_API FHbkEqualizerWaveControlAttack();
};

