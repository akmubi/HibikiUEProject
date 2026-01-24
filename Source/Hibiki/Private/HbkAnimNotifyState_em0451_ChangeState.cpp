#include "HbkAnimNotifyState_em0451_ChangeState.h"

UHbkAnimNotifyState_em0451_ChangeState::UHbkAnimNotifyState_em0451_ChangeState() {
    this->bUndoOnExit = true;
    this->NewState = ECentaur_SpearState::Idle;
    this->OnExitState = ECentaur_SpearState::Idle;
}


