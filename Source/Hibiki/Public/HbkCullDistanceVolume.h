#pragma once
#include "CoreMinimal.h"
#include "Engine/CullDistanceVolume.h"
#include "HbkCullDistanceVolume.generated.h"

UCLASS(Blueprintable)
class AHbkCullDistanceVolume : public ACullDistanceVolume {
    GENERATED_BODY()
public:
    AHbkCullDistanceVolume(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    virtual void PostEditMove(bool bFinished) override;
    virtual void Destroyed() override;
#endif
};

