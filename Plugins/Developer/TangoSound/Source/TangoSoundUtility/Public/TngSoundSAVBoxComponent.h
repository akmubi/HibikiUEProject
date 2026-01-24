#pragma once
#include "CoreMinimal.h"
#include "TngSoundBoxComponent.h"
#include "TngSoundSAVBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TANGOSOUNDUTILITY_API UTngSoundSAVBoxComponent : public UTngSoundBoxComponent {
    GENERATED_BODY()
public:
    UTngSoundSAVBoxComponent(const FObjectInitializer& ObjectInitializer);

};

