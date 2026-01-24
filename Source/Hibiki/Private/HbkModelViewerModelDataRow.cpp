#include "HbkModelViewerModelDataRow.h"

FHbkModelViewerModelDataRow::FHbkModelViewerModelDataRow() {
    this->Height = 0.00f;
    this->HeadHeight = 0.00f;
    this->bUseFieldOfView = false;
    this->FieldOfView = 0.00f;
    this->bUseCameraPitch = false;
    this->CameraPitch = 0.00f;
    this->bUseListCameraLocation = false;
    this->bUseListModelRotateZ = false;
    this->ListModelRotateZ = 0.00f;
    this->bUseCameraLocation = false;
    this->bUseModelRotateZ = false;
    this->ModelRotateZ = 0.00f;
    this->bUseCameraMove = false;
    this->CameraMoveX = 0.00f;
    this->CameraMoveY = 0.00f;
    this->CameraMoveZ = 0.00f;
    this->ListCameraLocation = FVector(0.0f);
    this->CameraLocation = FVector(0.0f);
}

