#include "HbkTitleMenuFlowManagerActor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"

AHbkTitleMenuFlowManagerActor::AHbkTitleMenuFlowManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->HideOutSeqName = TEXT("HideOut");
    this->FirstStageSeqName = TEXT("TitleToNewST01");
    this->NoticeScreenWidgetClass = NULL;
    this->TitleWidgetClass = NULL;
    this->TopMenuWidgetClass = NULL;
    this->SaveSlotListWidgetClass = NULL;
    this->DifficultySelectWidgetClass = NULL;
    this->BNetWidgetClass = NULL;
    this->CrossFadeWidgetClass = NULL;
    this->CaptureRenderTarget = NULL;
    this->CaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->CaptureRT_Material = NULL;
    this->CaptureRT_MaterialInst = NULL;
    this->CaptureComponent2D->SetupAttachment(RootComponent);
}


bool AHbkTitleMenuFlowManagerActor::RSS_ChangeMusicState(UAkAudioEvent* StateEvent) {
    return false;
}






void AHbkTitleMenuFlowManagerActor::OnTopMenuWidgetDisplayEnd() {
}

void AHbkTitleMenuFlowManagerActor::OnTitleWidgetDisplayEnd() {
}

void AHbkTitleMenuFlowManagerActor::OnSaveSlotListWidgetDisplayEnd() {
}

void AHbkTitleMenuFlowManagerActor::OnNoticeScreenWidgetWipeStart() {
}

void AHbkTitleMenuFlowManagerActor::OnNoticeScreenWidgetDisplayEnd() {
}

void AHbkTitleMenuFlowManagerActor::OnEndStageSelect() {
}

void AHbkTitleMenuFlowManagerActor::OnEndOption() {
}

void AHbkTitleMenuFlowManagerActor::OnEndOpMovie() {
}

void AHbkTitleMenuFlowManagerActor::OnEndOpEv() {
}

void AHbkTitleMenuFlowManagerActor::OnEndLoadOpEv() {
}

void AHbkTitleMenuFlowManagerActor::OnEndFirstSetting() {
}

void AHbkTitleMenuFlowManagerActor::OnEndCredit() {
}

void AHbkTitleMenuFlowManagerActor::OnEndCameraMove() {
}

void AHbkTitleMenuFlowManagerActor::OnDifficultySelectWidgetDisplayEnd() {
}


void AHbkTitleMenuFlowManagerActor::OnBNetWidgetDisplayEnd() {
}

bool AHbkTitleMenuFlowManagerActor::LoadSaveSlot() {
    return false;
}

bool AHbkTitleMenuFlowManagerActor::IsCameraMoving() {
    return false;
}


