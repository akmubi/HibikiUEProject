#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkPostProcessLensFlare.generated.h"

class UHbkPostProcessLensFlareComponent;

UCLASS(Blueprintable)
class AHbkPostProcessLensFlare : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPostProcessLensFlareComponent* LensFlareComponent;
    
public:
    AHbkPostProcessLensFlare(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BeginFadeOut();
    
};

