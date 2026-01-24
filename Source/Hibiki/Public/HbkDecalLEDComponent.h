#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/DecalComponent.h"
#include "HbkDecalLEDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkDecalLEDComponent : public UDecalComponent {
    GENERATED_BODY()
public:
    UHbkDecalLEDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PastingParams(const float Time, const FLinearColor& Color, const FLinearColor& Color2);
    
};

