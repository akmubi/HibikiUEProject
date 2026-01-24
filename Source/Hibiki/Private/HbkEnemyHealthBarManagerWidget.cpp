#include "HbkEnemyHealthBarManagerWidget.h"

UHbkEnemyHealthBarManagerWidget::UHbkEnemyHealthBarManagerWidget() {
    this->HealthBarWidgetClass = NULL;
}

void UHbkEnemyHealthBarManagerWidget::OnEndAttackNotice(AHbkEnemyCharacter* Attacker, bool IsParrySuccessful, UAnimSequenceBase* PlayerAction) {
}

void UHbkEnemyHealthBarManagerWidget::OnBeginAttackNotice() {
}


