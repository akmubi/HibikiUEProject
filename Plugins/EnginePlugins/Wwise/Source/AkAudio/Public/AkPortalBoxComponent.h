#pragma once
#include "CoreMinimal.h"
#include "AkBoxComponent.h"
#include "AkPortalBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkPortalBoxComponent : public UAkBoxComponent {
    GENERATED_BODY()
public:
    UAkPortalBoxComponent(const FObjectInitializer& ObjectInitializer);

};

