#pragma once
#include "CoreMinimal.h"
#include "HbkSpotLightComponent.h"
#include "HbkShadowSpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkShadowSpotLightComponent : public UHbkSpotLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxShadowLightDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxShadowLightDistanceFadeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bHbkVisibility;
    
    UHbkShadowSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

