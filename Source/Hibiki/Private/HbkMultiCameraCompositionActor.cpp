#include "HbkMultiCameraCompositionActor.h"
#include "Components/SceneComponent.h"

AHbkMultiCameraCompositionActor::AHbkMultiCameraCompositionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->bEnableMultiCamera = false;
    this->bPreOpenMovie = false;
    this->bFixedAspectRatio1 = true;
    this->Window1PosX = 0.00f;
    this->Window1PosY = 0.00f;
    this->Window1ScaleX = 1.00f;
    this->Window1ScaleY = 1.00f;
    this->bUseBinkMovie = false;
    this->BinkMediaPlayer = NULL;
    this->BinkMediaTexture = NULL;
    this->MediaSource = NULL;
    this->TextureSource = NULL;
    this->DisplayType2 = EHbkMultiCameraWindowDisplayType::HBK_MULTI_CAMERA_WINDOW_DISPLAY_MOVIE;
    this->bFixedAspectRatio2 = true;
    this->bUseMaskTexture2 = false;
    this->bUseBorderMaskTexture2 = false;
    this->Window2PosX = 0.00f;
    this->Window2PosY = 0.00f;
    this->Window2ScaleX = 1.00f;
    this->Window2ScaleY = 1.00f;
    this->Window2CropScaleX = 0.50f;
    this->Window2CropScaleY = 1.00f;
    this->Window2MaskPosOffsetX = 0.00f;
    this->Window2MaskPosOffsetY = 0.00f;
    this->Window2UVOffsetU = 0.00f;
    this->Window2UVOffsetV = 0.00f;
    this->Window2UVCropScaleU = 1.00f;
    this->Window2UVCropScaleV = 1.00f;
    this->bIsWindow2CropScaleDisplayBlackBackground = false;
    this->bUseWindow3 = false;
    this->DisplayType3 = EHbkMultiCameraWindowDisplayType::HBK_MULTI_CAMERA_WINDOW_DISPLAY_MOVIE;
    this->bFixedAspectRatio3 = true;
    this->bUseMaskTexture3 = false;
    this->MaskTexture3 = NULL;
    this->bUseBorderMaskTexture3 = false;
    this->BorderMaskTexture3 = NULL;
    this->Window3PosX = 0.00f;
    this->Window3PosY = 0.00f;
    this->Window3ScaleX = 1.00f;
    this->Window3ScaleY = 1.00f;
    this->Window3CropScaleX = 0.50f;
    this->Window3CropScaleY = 1.00f;
    this->Window3MaskPosOffsetX = 0.00f;
    this->Window3MaskPosOffsetY = 0.00f;
    this->Window3UVOffsetU = 0.00f;
    this->Window3UVOffsetV = 0.00f;
    this->Window3UVCropScaleU = 1.00f;
    this->Window3UVCropScaleV = 1.00f;
    this->bIsWindow3CropScaleDisplayBlackBackground = false;
}


