#pragma once
#include "CoreMinimal.h"
#include "HbkEM_EnemyMoveDef.h"
#include "HbkEM_InterpRot.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEM_InterpRot : public FHbkEM_EnemyMoveDef {
    GENERATED_BODY()
public:
    FHbkEM_InterpRot();
};

