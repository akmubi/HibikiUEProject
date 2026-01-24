#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "AkBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UAkBoxComponent(const FObjectInitializer& ObjectInitializer);

};

