#pragma once
#include "CoreMinimal.h"
#include "TngSoundBoxComponent.h"
#include "TngSoundPortalBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TANGOSOUNDUTILITY_API UTngSoundPortalBoxComponent : public UTngSoundBoxComponent {
    GENERATED_BODY()
public:
    UTngSoundPortalBoxComponent(const FObjectInitializer& ObjectInitializer);

};

