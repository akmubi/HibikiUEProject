#include "HbkAttackNoticeComponent.h"

UHbkAttackNoticeComponent::UHbkAttackNoticeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoticeParrySE = NULL;
    this->NoticeDodgeSE = NULL;
    this->NoticeExitTiming = EAttackNoticeExitTiming::BarFirst;
    this->PlayingNoticePSC = NULL;
}

void UHbkAttackNoticeComponent::StopByBarTiming(int32 NoteCount) {
}

void UHbkAttackNoticeComponent::RemoveNotice() {
}

void UHbkAttackNoticeComponent::PlayNotice(EAttackNoticeType AttackNoticeType) {
}

/*
FAttackNoticeWindowDelegate UHbkAttackNoticeComponent::GetAttackNoticeWindowDelegate() {
    return FHbkAttackNoticeComponentReturnValue();
}

FAttackNoticeRemoveDelegate UHbkAttackNoticeComponent::GetAttackNoticeRemoveDelegate() {
    return FHbkAttackNoticeComponentReturnValue();
}

FAttackNoticeRemoveBackDelegate UHbkAttackNoticeComponent::GetAttackNoticeRemoveBackDelegate() {
    return FHbkAttackNoticeComponentReturnValue();
}

FAttackNoticeReadyDelegate UHbkAttackNoticeComponent::GetAttackNoticeReadyDelegate() {
    return FHbkAttackNoticeComponentReturnValue();
}
*/

TArray<FAttackNoticeInfo> UHbkAttackNoticeComponent::GetAttackNoticeInfoList() {
    return TArray<FAttackNoticeInfo>();
}

/*
FAttackNoticeCreateDelegate UHbkAttackNoticeComponent::GetAttackNoticeCreateDelegate() {
    return FHbkAttackNoticeComponentReturnValue();
}
*/

void UHbkAttackNoticeComponent::EndNotice() {
}

void UHbkAttackNoticeComponent::EndBackNotice() {
}

void UHbkAttackNoticeComponent::BeginNotice() {
}

void UHbkAttackNoticeComponent::BackNotice(int32 NoticeNum) {
}


