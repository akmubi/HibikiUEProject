#pragma once
#include "CoreMinimal.h"
#include "HbkSoloLightComponent.h"
#include "HbkSoloSpotLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkSoloSpotLightComponent : public UHbkSoloLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterConeAngle;
    
    UHbkSoloSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

