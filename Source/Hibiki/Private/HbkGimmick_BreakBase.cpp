#include "HbkGimmick_BreakBase.h"
#include "HbkGameAgentComponent.h"

AHbkGimmick_BreakBase::AHbkGimmick_BreakBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveDestroyGameFlag = false;
    this->useSignificance = false;
    this->significanceDisp = false;
    this->significanceDist = -1.00f;
    this->noRenderMaxTime = 0.00f;
    this->minTickInterval = -1.00f;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

void AHbkGimmick_BreakBase::SetPartnerIconEnabled(bool Flag) {
}

void AHbkGimmick_BreakBase::CommonResourceLoadEnd() {
}


