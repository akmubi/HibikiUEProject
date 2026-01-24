#include "FaceFXEntry.h"

FFaceFXEntry::FFaceFXEntry() {
    this->SkelMeshComp = NULL;
    this->AudioComp = NULL;
    this->Character = NULL;
    this->bIsCompensateForForceFrontXAxis = false;
    this->bIsAutoPlaySound = false;
    this->bIsDisableMorphTargets = false;
    this->bIsDisableMaterialParameters = false;
    this->bIsIgnoreEvents = false;
}

