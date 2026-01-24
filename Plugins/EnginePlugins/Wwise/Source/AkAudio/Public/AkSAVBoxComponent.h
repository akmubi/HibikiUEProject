#pragma once
#include "CoreMinimal.h"
#include "AkBoxComponent.h"
#include "AkSAVBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkSAVBoxComponent : public UAkBoxComponent {
    GENERATED_BODY()
public:
    UAkSAVBoxComponent(const FObjectInitializer& ObjectInitializer);

};

