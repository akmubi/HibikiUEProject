#include "HbkPhotoAnimInstance.h"

UHbkPhotoAnimInstance::UHbkPhotoAnimInstance() {
    this->PoseAnim = NULL;
    this->bSetPose = false;
    this->EmoteAnim = NULL;
    this->EmoteBlendWeight = 0.00f;
}

void UHbkPhotoAnimInstance::SetSourceMeshComp(USkeletalMeshComponent* MeshComp) {
}


