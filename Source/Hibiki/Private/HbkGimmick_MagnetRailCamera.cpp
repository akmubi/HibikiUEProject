#include "HbkGimmick_MagnetRailCamera.h"
#include "Components/SceneComponent.h"

AHbkGimmick_MagnetRailCamera::AHbkGimmick_MagnetRailCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bFocusFollowMagnet = true;
    this->FocusDistance = 0.00f;
    this->FocusActor = NULL;
    this->bFollowMagnet = false;
}


