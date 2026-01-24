#pragma once
#include "CoreMinimal.h"
#include "HbkTalkEventEditKey.h"
#include "HbkTalkEventEditCameraKey.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API AHbkTalkEventEditCameraKey : public AHbkTalkEventEditKey {
    GENERATED_BODY()
public:
    AHbkTalkEventEditCameraKey(const FObjectInitializer& ObjectInitializer);

};

