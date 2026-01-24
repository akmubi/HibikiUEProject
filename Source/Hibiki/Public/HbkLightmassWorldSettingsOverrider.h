#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameFramework/WorldSettings.h"
#include "HbkLightmassWorldSettingsOverrider.generated.h"

UCLASS(Blueprintable)
class AHbkLightmassWorldSettingsOverrider : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightmassWorldInfoSettings LightmassWorldInfoSettings;
    
    AHbkLightmassWorldSettingsOverrider(const FObjectInitializer& ObjectInitializer);

};

