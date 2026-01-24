#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyCharacter.h"
#include "HbkEm0200_Gunner.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0200_Gunner : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
    AHbkEm0200_Gunner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextShootFraction(float Rate);
    
};

