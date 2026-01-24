#include "HbkStunGaugeManagerWidget.h"

UHbkStunGaugeManagerWidget::UHbkStunGaugeManagerWidget() {
    this->StunGaugeWidgetClass = NULL;
}

void UHbkStunGaugeManagerWidget::OnEndAttackNotice(AHbkEnemyCharacter* Attacker, bool IsParrySuccessful, UAnimSequenceBase* PlayerAction) {
}

void UHbkStunGaugeManagerWidget::OnBeginAttackNotice() {
}


