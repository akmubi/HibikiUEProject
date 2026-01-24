#include "HbkTalkableActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "HbkGameAgentComponent.h"
#include "HbkInteractTargetComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkTalkableActor::AHbkTalkableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->AnimKit = NULL;
    this->InitialSyncAnim = NULL;
    this->bHiddenInTalk = true;
    this->bFixPlayRate = false;
    this->TalkData = NULL;
    this->TalkMode = EHbkTalkableMode::Sequentially;
    this->TalkableInterval = 1.50f;
    this->bVisibleAtStart = true;
    this->bEnableGameFlag = false;
    this->bUseInteract = true;
    this->bDoOnceIntract = false;
    this->bDisableResumOnTalkEnd = false;
    this->useSignificance = false;
    this->significanceDisp = false;
    this->significanceDist = -1.00f;
    this->noRenderMaxTime = 0.00f;
    this->minTickInterval = -1.00f;
    this->IsSignificanceStateActive = true;
    this->SkeletalMeshComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
    this->InteractTargetComponent = CreateDefaultSubobject<UHbkInteractTargetComponent>(TEXT("InteractTarget0"));
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent0"));
    this->GameAgentComponent = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->InteractTargetComponent->SetupAttachment(RootComponent);
    this->CapsuleComponent->SetupAttachment(RootComponent);
}

void AHbkTalkableActor::UnPauseForTkevSQ() {
}

void AHbkTalkableActor::SuspendTalkEndProcess() {
}

void AHbkTalkableActor::SuspendForTkevSQ() {
}

void AHbkTalkableActor::StopAction() {
}

void AHbkTalkableActor::ShowTalkableActorByAnim() {
}

void AHbkTalkableActor::SetVisibleActor(bool bNewVisible) {
}

void AHbkTalkableActor::SetCallSign(const FName& NewCallSign) {
}

void AHbkTalkableActor::ResumeTalkEndProcess() {
}

void AHbkTalkableActor::ResumeInteract() {
}

void AHbkTalkableActor::ResumeForTkevSQ() {
}

void AHbkTalkableActor::ResumeAction() {
}

void AHbkTalkableActor::RecieveTalkSessionEnd(const FHbkTalkContext TalkContext) {
}

void AHbkTalkableActor::RecieveTalkCue(const FName TalkCue) {
}

void AHbkTalkableActor::PlaySyncAnimationAtHO(FName StartSection) {
}

void AHbkTalkableActor::PlayActionByName(const FName& NewActName) {
}

void AHbkTalkableActor::PlayAction() {
}

void AHbkTalkableActor::PauseInteract() {
}

void AHbkTalkableActor::PauseForTkevSQ() {
}

void AHbkTalkableActor::PauseAction() {
}

void AHbkTalkableActor::OnSignificanceStateEvent(bool IsActive) {
}

void AHbkTalkableActor::OnInteraction(AActor* Interactor) {
}

void AHbkTalkableActor::Invoke_OnTalkCue(const FName TalkCueName) {
}

void AHbkTalkableActor::Invoke_OnEndTalk(const FName TalkResultOption) {
}

void AHbkTalkableActor::Invoke_OnBeginTalk() {
}

void AHbkTalkableActor::HideTalkableActorByAnim() {
}

AActor* AHbkTalkableActor::GetSyncActionActor() {
    return NULL;
}

FName AHbkTalkableActor::GetCallSign() {
    return NAME_None;
}

void AHbkTalkableActor::CloseTalkEvent() {
}






void AHbkTalkableActor::BeginTalk(UObject* Interactor, bool bUnPlayable) {
}


