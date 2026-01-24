#include "HbkGimmickBase.h"
#include "HbkGameAgentComponent.h"
#include "HbkGimmickVfxComponent.h"

AHbkGimmickBase::AHbkGimmickBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bOldSyncProperty = true;
    this->bInitSyncIsSelf = false;
    this->bAutoActivate = false;
    this->bIsDebug = false;
    this->bUseCurveAsset = false;
    this->MoveCurveAsset = NULL;
    this->MoveCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->useSignificance = false;
    this->StopTickForReturnCheckPoint = false;
    this->significanceDisp = false;
    this->ignoreActorTick = false;
    this->ignoreParticleComponentTick = false;
    this->ignoreSplineMoveComponentTick = false;
    this->ignoreInteractTargetComponentTick = true;
    this->ignoreDamageComponentTick = true;
    this->ignoreFlashingLightComponentTick = true;
    this->significanceDist = -1.00f;
    this->noRenderMaxTime = 0.00f;
    this->minTickInterval = -1.00f;
    this->IsSignificanceStateActive = false;
    this->SyncNote = EHbkNote::Note_Quarter;
    this->AcceptanceInitSyncDiff = 0.50f;
    this->bDelayInitSync = false;
    this->DelayNoteCountMax = 0;
    this->VFXComp = CreateDefaultSubobject<UHbkGimmickVfxComponent>(TEXT("VFXComponent"));
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

void AHbkGimmickBase::SetPartnerIconEnabled(bool Flag) {
}

void AHbkGimmickBase::OnHalfEvent(int32 NoteCount) {
}

void AHbkGimmickBase::OnBeatEvent(int32 NoteCount) {
}

void AHbkGimmickBase::OnBarEvent(int32 NoteCount) {
}

void AHbkGimmickBase::On8thEvent(int32 NoteCount, bool bOnBeat) {
}

void AHbkGimmickBase::On16thEvent(int32 NoteCount, bool bOnBeat) {
}

bool AHbkGimmickBase::IsDebug() const {
    return false;
}

bool AHbkGimmickBase::IsActive() const {
    return false;
}

EHbkNote AHbkGimmickBase::GetSyncNote(int32 InitRegisterParamIndex) const {
    return EHbkNote::None;
}

void AHbkGimmickBase::ForcePauseTick(bool Flag) {
}

bool AHbkGimmickBase::CopyAkComp2SoundInfo() {
    return false;
}

void AHbkGimmickBase::CommonResourceLoadEnd() {
}


