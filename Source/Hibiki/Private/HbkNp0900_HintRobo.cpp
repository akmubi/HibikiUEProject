#include "HbkNp0900_HintRobo.h"
#include "HbkComboJudgeComponent.h"
#include "HbkDamageComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkNp0900_HintRobo::AHbkNp0900_HintRobo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotatoToPlayerSpeed = 3.00f;
    this->TargetCameraAnglePitch = -10.00f;
    this->TargetCameraAngleYawOffset = 30.00f;
    this->TargetCameraDuration = 0.25f;
    this->TargetCameraBlendInTime = 0.25f;
    this->DamageComp = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("DamageComp"));
    this->ComboJudgeComp = CreateDefaultSubobject<UHbkComboJudgeComponent>(TEXT("ComboJudgeComponent"));
    this->ManagementIndex = 2147483647;
    this->SmallBoardAnimInstance = NULL;
    this->MediumBoardAnimInstance = NULL;
    this->LargeBoardAnimInstance = NULL;
    this->DamageReactionListAsset_Combo = NULL;
    this->FooterButtonWidgetClass = NULL;
    this->NotInteractAccentIntervalMin = 6.00f;
    this->NotInteractAccentIntervalMax = 10.00f;
    this->TalkDataTable = NULL;
    this->BehaviorTable = NULL;
    this->IgnoreRection_IgnoreMinCount = 2;
    this->IgnoreRection_MoveMinCount = 2;
    this->ShortDisHologramType = EHbkNp0900_ShortDisHologramType::Action;
    this->LeaveJudgeDistance = 600.00f;
    this->bEnableFirstTalkByDistance = false;
    this->FirstTalkDistance = 800.00f;
    this->LeaveJudgeDistanceOnFirstTalk = 1200.00f;
    this->InteractTargetComp = NULL;
    this->ShortDisHologramMesh = NULL;
    this->LongDisHologramMesh = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("LongDisHolo"));
    this->ShortDisHologramMesh_Action = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("ShortDisHolo_Action"));
    this->ShortDisHologramMesh_Battle = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("ShortDisHolo_Battle"));
    this->ShortDisHologramMesh_Game = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("ShortDisHolo_Game"));
    this->ShortDisHologramMesh_Setting = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("ShortDisHolo_Setting"));
    this->SmallBoardMeshComp = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SK_np0910"));
    this->MediumBoardMeshComp = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SK_np0911"));
    this->LargeBoardMeshComp = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SK_np0912"));
    this->RecoverItemMeshComp = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SK_np0901"));
    this->TalkSession = NULL;
    this->FooterButtonWidget = NULL;
    this->LongDisHologramMesh->SetupAttachment(GetMesh());
    this->ShortDisHologramMesh_Action->SetupAttachment(GetMesh());
    this->ShortDisHologramMesh_Battle->SetupAttachment(GetMesh());
    this->ShortDisHologramMesh_Game->SetupAttachment(GetMesh());
    this->ShortDisHologramMesh_Setting->SetupAttachment(GetMesh());
    this->SmallBoardMeshComp->SetupAttachment(GetMesh());
    this->MediumBoardMeshComp->SetupAttachment(GetMesh());
    this->LargeBoardMeshComp->SetupAttachment(GetMesh());
    this->RecoverItemMeshComp->SetupAttachment(GetMesh());
}

void AHbkNp0900_HintRobo::WaitEndByBeat(int32 noteCnt, bool bDownBeat) {
}

void AHbkNp0900_HintRobo::ReleaseCancel_Talk() {
}

void AHbkNp0900_HintRobo::ReleaseCancel_Player() {
}

void AHbkNp0900_HintRobo::Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkNp0900_HintRobo::PressCancel_Talk() {
}

void AHbkNp0900_HintRobo::PressCancel_Player() {
}

void AHbkNp0900_HintRobo::OnInteraction(AActor* Interactor) {
}

void AHbkNp0900_HintRobo::OnComboSuccess() {
}

void AHbkNp0900_HintRobo::OnComboFailure() {
}

void AHbkNp0900_HintRobo::OnChangeTutorialPage(int32 CurrentHierarchyNum) {
}

void AHbkNp0900_HintRobo::OnChangeSignificance(bool bActive) {
}

void AHbkNp0900_HintRobo::OnBeginOverlapChaseTrigger(AActor* OverlappedActor, AActor* OtherActor) {
}

void AHbkNp0900_HintRobo::EndTutorial() {
}

void AHbkNp0900_HintRobo::EndTalk(const FHbkTalkContext TalkContext) {
}

void AHbkNp0900_HintRobo::BeginTalk() {
}

void AHbkNp0900_HintRobo::AbortFlowOnTalk() {
}

void AHbkNp0900_HintRobo::AbortFlow() {
}


