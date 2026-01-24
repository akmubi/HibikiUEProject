#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FaceFXBlueprintLibrary.generated.h"

class UFaceFXAnim;

UCLASS(Blueprintable)
class FACEFX_API UFaceFXBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFaceFXBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAnimationBounds(const UFaceFXAnim* Animation, float& Start, float& End, float& Duration);
    
};

