#include "HbkEnginePostProcessVolumePatch.h"
#include "HbkGameAgentComponent.h"

AHbkEnginePostProcessVolumePatch::AHbkEnginePostProcessVolumePatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseColorGrading = false;
    this->bUseLensFilter = false;
    this->bUseLineArt = false;
    this->bUsePrintFilter = false;
    this->bUseScanline = false;
    this->bUseDecalLightMultBlendPatch = false;
    this->bUseGameEnvPhasePatch = false;
    this->PhaseStartEditorStatePatch = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
    this->bIsUnbound = false;
    this->Priority = 0.00f;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->bSaveType = EHbkEnginePostProcessVolumePatch_SaveType::SAVE_NONE;
}


