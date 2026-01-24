#include "HbkEm6000OuterTornado.h"

FHbkEm6000OuterTornado::FHbkEm6000OuterTornado() {
    this->Command = EHbkEm6000CommandBattleCommand::X;
    this->UniqueId = 0;
    this->NoteTime = 0.00f;
    this->CurrentTime = 0.00f;
    this->bIsAttack = false;
    this->bIsBlock = false;
    this->AttackParticle = NULL;
    this->BlockParticle = NULL;
    this->AttackParticleDestroyCount = 0;
}

