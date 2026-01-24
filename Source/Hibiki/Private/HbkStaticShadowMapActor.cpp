#include "HbkStaticShadowMapActor.h"
#include "HbkStaticShadowMapCaptureComponent2D.h"
#include "HbkStaticShadowMapGameComponent.h"

AHbkStaticShadowMapActor::AHbkStaticShadowMapActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkStaticShadowMapGameComponent>(TEXT("HbkStaticShadowMapGameComponent"));
    this->HbkStaticShadowMapCaptureComponent2D = CreateDefaultSubobject<UHbkStaticShadowMapCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->HbkStaticShadowMapGameComponent = (UHbkStaticShadowMapGameComponent*)RootComponent;
    this->HbkStaticShadowMapCaptureComponent2D->SetupAttachment(RootComponent);
}


