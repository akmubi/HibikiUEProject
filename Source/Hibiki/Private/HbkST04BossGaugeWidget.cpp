#include "HbkST04BossGaugeWidget.h"

UHbkST04BossGaugeWidget::UHbkST04BossGaugeWidget() {
    this->FundRate = 0.00f;
    this->FundPercent = 0.00f;
    this->UsedFundNum = 0;
    this->BG_LoopAnim = NULL;
    this->Widget_OpenAnim = NULL;
    this->UseFund_InAnim = NULL;
}

void UHbkST04BossGaugeWidget::UseFund(int32 UsedFund) {
}

void UHbkST04BossGaugeWidget::ST04GaugeSetUp(int32 MaxFund) {
}


void UHbkST04BossGaugeWidget::OnQuarterNote(int32 NoteCount, bool bDownBeat) {
}


