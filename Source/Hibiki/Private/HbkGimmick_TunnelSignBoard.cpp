#include "HbkGimmick_TunnelSignBoard.h"

AHbkGimmick_TunnelSignBoard::AHbkGimmick_TunnelSignBoard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->MoveScale = 1.00f;
    this->RadiusScale = 1.00f;
}

void AHbkGimmick_TunnelSignBoard::OnNoteWhole_TunnelSignboard(int32 NoteCount, bool bDownBeat) {
}


