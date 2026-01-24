#pragma once
#include "CoreMinimal.h"
#include "HbkEM_EnemyMoveDef.h"
#include "HbkEM_AddMovementInput.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEM_AddMovementInput : public FHbkEM_EnemyMoveDef {
    GENERATED_BODY()
public:
    FHbkEM_AddMovementInput();
};

