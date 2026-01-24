#include "HbkHomingProjectile.h"

AHbkHomingProjectile::AHbkHomingProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMoveSpeed = 2000.00f;
}

void AHbkHomingProjectile::OnChangeHomingMove(int32 NoteCount) {
}


