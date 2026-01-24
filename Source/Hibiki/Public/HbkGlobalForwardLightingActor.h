#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkGlobalForwardLightingActor.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGlobalForwardLightingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateCharaShadingForwardLightsEveryFrame;
    
    AHbkGlobalForwardLightingActor(const FObjectInitializer& ObjectInitializer);

};

