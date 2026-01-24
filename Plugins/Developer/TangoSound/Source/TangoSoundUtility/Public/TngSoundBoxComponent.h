#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TngSoundBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TANGOSOUNDUTILITY_API UTngSoundBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UTngSoundBoxComponent(const FObjectInitializer& ObjectInitializer);

};

