#include "AkSurfaceReflectorSetComponent.h"

UAkSurfaceReflectorSetComponent::UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableSurfaceReflectors = false;
    this->bEnableDiffraction = true;
    this->bEnableDiffractionOnBoundaryEdges = false;
    this->AssociatedRoom = NULL;
}

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet() {
}


