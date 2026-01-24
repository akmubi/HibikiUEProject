#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableActor.h"
#include "HbkTalkableCharacter.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkTalkableCharacter : public AHbkTalkableActor {
    GENERATED_BODY()
public:
    AHbkTalkableCharacter(const FObjectInitializer& ObjectInitializer);

};

