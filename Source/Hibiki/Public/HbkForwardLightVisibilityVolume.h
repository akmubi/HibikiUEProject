#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "HbkForwardLightVisibilityVolume.generated.h"

class AHbkForwardLight;

UCLASS(Blueprintable)
class AHbkForwardLightVisibilityVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkForwardLight*> VisibleForwardLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    AHbkForwardLightVisibilityVolume(const FObjectInitializer& ObjectInitializer);

};

