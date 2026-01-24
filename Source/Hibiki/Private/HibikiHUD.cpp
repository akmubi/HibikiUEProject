#include "HibikiHUD.h"
#include "Templates/SubclassOf.h"

AHibikiHUD::AHibikiHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->DefaultTngUserWidgets.AddDefaulted(1);
    this->bShownGameHUD = true;
    this->bShownDebugHUD = false;
    this->PlayerHUD = NULL;
    this->DebugWidget = NULL;
    this->LiftBattleWidgetClass = NULL;
    this->PauseWidgetClass = NULL;
    this->CommonBGWidgetClass = NULL;
    this->StageResultWidgetClass = NULL;
    this->GameOverWidgetClass = NULL;
    this->RhythmScoreWidgetClass = NULL;
    this->RhythmGameWidgetClass = NULL;
    this->KorsicaGimmickWidgetClass = NULL;
    this->MacaronGimmickWidgetClass = NULL;
    this->TutorialHierarchyClass = NULL;
    this->CutSceneFooterButtonWidget = NULL;
}

void AHibikiHUD::ToggleShowGameHUD() {
}

void AHibikiHUD::ToggleShowAll() {
}

void AHibikiHUD::StartRhythmJumpWipe(UObject* WorldContextObject, EHbkNote NoteType) {
}

void AHibikiHUD::StartLetterBox(UObject* WorldContextObject, EHbkNote NoteType, EHbkLetterBoxType AnimType) {
}

void AHibikiHUD::ShowGameHUD() {
}

void AHibikiHUD::ShowAll() {
}

void AHibikiHUD::RemoveUserWidget(TSubclassOf<UTngUserWidget> UserWidget, APlayerController* PlayerController) {
}

bool AHibikiHUD::RemoveSpecifiedUserWidget(UTngUserWidget* UserWidget, APlayerController* PlayerController) {
    return false;
}

void AHibikiHUD::OnChangedConstrainAspectRatio(bool bEnabled) {
}

bool AHibikiHUD::IsCoverScreenTransition(UObject* WorldContextObject) {
    return false;
}

void AHibikiHUD::HideGameHUD() {
}

void AHibikiHUD::HideAll() {
}

void AHibikiHUD::HbkAddToViewport(UUserWidget* UserWidget, int32 ZOrder) {
}

TArray<UTngUserWidget*> AHibikiHUD::GetWidgetByClass(TSubclassOf<UTngUserWidget> UserWidget, APlayerController* PlayerController) {
    return TArray<UTngUserWidget*>();
}

UHbkPlayerHUDBaseWidget* AHibikiHUD::GetPlayerHUD() {
    return NULL;
}

UHbkLiftBattleWidget* AHibikiHUD::GetLiftBattleWidget() {
    return NULL;
}

EHbkHUDFollowDevice AHibikiHUD::GetLatestFollowDevice() const {
    return EHbkHUDFollowDevice::Gamepad;
}

UHbkDebugSelectWidget* AHibikiHUD::GetDebugWidget() {
    return NULL;
}

UHbkBossGaugeParentWidget* AHibikiHUD::GetBossGaugeParent() {
    return NULL;
}

void AHibikiHUD::EndRhythmJumpWipe(UObject* WorldContextObject, EHbkNote NoteType) {
}

void AHibikiHUD::EndLetterBox(UObject* WorldContextObject, EHbkNote NoteType, EHbkLetterBoxType AnimType) {
}

void AHibikiHUD::DebugEnable(FGameplayTag DebugTag) {
}

void AHibikiHUD::DebugDisable(FGameplayTag DebugTag) {
}

void AHibikiHUD::DebugAction(FGameplayTag DebugTag) {
}

UHbkTalkWidget* AHibikiHUD::CreateTalkWidget(TSubclassOf<UTngUserWidget> TalkWidget, APlayerController* PlayerController, bool bIsShow, bool IsChangeDraw) {
    return NULL;
}

UTngUserWidget* AHibikiHUD::AddUserWidget(TSubclassOf<UTngUserWidget> UserWidget, APlayerController* PlayerController, bool bIsShow, bool IsChangeDraw, EDrawWidgetType DrawType, int32 ZOrder) {
    return NULL;
}


