#pragma once
#include "CoreMinimal.h"
#include "HbkGrantEnemiesInfo.generated.h"

class AHbkEnemyCharacter;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FHbkGrantEnemiesInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEnemyCharacter> EnemyPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> BeamEffect;
    
    HIBIKI_API FHbkGrantEnemiesInfo();
};

