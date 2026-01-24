#pragma once
#include "CoreMinimal.h"
#include "HbkEM_EnemyMoveDef.h"
#include "HbkEM_MoveToDirection.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEM_MoveToDirection : public FHbkEM_EnemyMoveDef {
    GENERATED_BODY()
public:
    FHbkEM_MoveToDirection();
};

