#include "HbkSETask_Stun.h"

UHbkSETask_Stun::UHbkSETask_Stun() {
    this->StunTimeMax = 4.00f;
    this->AdditiveStunTimeByNoteCount = 0.00f;
    this->pShockwaveMid_VFX = NULL;
    this->pShockwaveLarge_VFX = NULL;
    this->pShockwaveLink_VFX = NULL;
    this->ShockwaveVfxReEffectTimer = 0.00f;
    this->bIsSpreadStun = false;
}


