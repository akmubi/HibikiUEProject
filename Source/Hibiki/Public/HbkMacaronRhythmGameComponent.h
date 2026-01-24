#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkMacaronRhythmGameComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkMacaronRhythmGameComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHbkMacaronRhythmGameComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SuccessRhythmGame();
    
    UFUNCTION(BlueprintCallable)
    void OpenRhythmGame();
    
    UFUNCTION(BlueprintCallable)
    void CloseRhythmGame();
    
};

