#include "HbkCharacterMaterialTableRow.h"

FHbkCharacterMaterialTableRow::FHbkCharacterMaterialTableRow() {
    this->CharaSpecularLightDirPitchOffset = 0.00f;
    this->CharaSpecularLightDirYawOffset = 0.00f;
    this->HbkRotZ = 0.00f;
    this->HbkRotY = 0.00f;
    this->MeshOutlineWidth = 0.00f;
    this->MeshOutlineZOffset = 0.00f;
    this->bOverrideMeshOutlineScreenRelativeScale = false;
    this->OutlineScreenPercentagePersist = 0.00f;
    this->OutlineScreenPercentagePersistUniform = 0.00f;
    this->OutlineWorldSpaceScale = 0.00f;
    this->OutlineWorldSpaceSizeLimit = 0.00f;
    this->bForceDisableReceiveShadowMain = false;
}

