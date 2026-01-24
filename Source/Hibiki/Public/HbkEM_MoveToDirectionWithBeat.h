#pragma once
#include "CoreMinimal.h"
#include "HbkEM_EnemyMoveDef.h"
#include "HbkEM_MoveToDirectionWithBeat.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEM_MoveToDirectionWithBeat : public FHbkEM_EnemyMoveDef {
    GENERATED_BODY()
public:
    FHbkEM_MoveToDirectionWithBeat();
};

