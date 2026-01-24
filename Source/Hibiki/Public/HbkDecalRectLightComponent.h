#pragma once
#include "CoreMinimal.h"
#include "HbkDecalLightComponent.h"
#include "HbkDecalRectLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkDecalRectLightComponent : public UHbkDecalLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleDirectionShading;
    
    UHbkDecalRectLightComponent(const FObjectInitializer& ObjectInitializer);

};

