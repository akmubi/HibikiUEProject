#include "HbkGimmick_bg0220.h"

AHbkGimmick_bg0220::AHbkGimmick_bg0220(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bMoveType = EHbkGimmick_bg0220MoveType::BG0220_MTYPE_A;
    this->bRightMove = true;
    this->bLeftMove = true;
    this->bDownMove = true;
    this->bBackMove = true;
    this->bSaveType = EHbkGimmick_bg0220SaveType::BG0220_SVT_NONE;
}

void AHbkGimmick_bg0220::OnNoteWhole_bg0220(int32 NoteCount, bool bDownBeat) {
}


