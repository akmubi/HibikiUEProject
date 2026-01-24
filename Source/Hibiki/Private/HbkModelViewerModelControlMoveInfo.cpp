#include "HbkModelViewerModelControlMoveInfo.h"

FHbkModelViewerModelControlMoveInfo::FHbkModelViewerModelControlMoveInfo() {
    this->Height = 0.00f;
    this->FieldOfView = 0.00f;
    this->CameraPitch = 0.00f;
    this->ListModelRotateZ = 0.00f;
    this->ModelRotateZ = 0.00f;
    this->CameraMoveX = 0.00f;
    this->CameraMoveY = 0.00f;
    this->CameraMoveZ = 0.00f;
    this->ListCameraLocation = FVector(0.0f);
    this->CameraLocation = FVector(0.0f);
}

