#pragma once
#include "CoreMinimal.h"
#include "HbkTalkEventEditKey.h"
#include "HbkTalkEventEditCharacterKey.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API AHbkTalkEventEditCharacterKey : public AHbkTalkEventEditKey {
    GENERATED_BODY()
public:
    AHbkTalkEventEditCharacterKey(const FObjectInitializer& ObjectInitializer);

};

