#pragma once
#include "CoreMinimal.h"
#include "HbkEM_EnemyMoveDef.h"
#include "HbkEM_MoveJump.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEM_MoveJump : public FHbkEM_EnemyMoveDef {
    GENERATED_BODY()
public:
    FHbkEM_MoveJump();
};

