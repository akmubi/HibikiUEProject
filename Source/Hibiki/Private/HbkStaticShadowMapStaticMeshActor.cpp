#include "HbkStaticShadowMapStaticMeshActor.h"

AHbkStaticShadowMapStaticMeshActor::AHbkStaticShadowMapStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->bCanBeInCluster = false;
}


