#include "HbkVFXActorBase.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "HbkGameAgentComponent.h"
#include "HbkGimmickVfxComponent.h"
#include "HbkParticleSystemComponent.h"

AHbkVFXActorBase::AHbkVFXActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Tags.AddDefaulted(1);
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->ParticleComponent = CreateDefaultSubobject<UHbkParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->GimmickVfxComponent = CreateDefaultSubobject<UHbkGimmickVfxComponent>(TEXT("GimmickVfxComponent"));
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->BillboardComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->bSaveState = EHbkVFXActorBase_SaveType::VFXSTATE_NONE;
    this->bExecSave = true;
    this->PlayToBPM = false;
    this->AutoActivate = true;
    this->TickStopWhenDeactivate = false;
    this->useSignificance = false;
    this->significanceDisp = false;
    this->significanceDist = -1.00f;
    this->noRenderMaxTime = 0.00f;
    this->minTickInterval = -1.00f;
    this->ParticleComponent->SetupAttachment(RootComponent);
    this->BillboardComp->SetupAttachment(RootComponent);
}

bool AHbkVFXActorBase::DeleateAkComp() {
    return false;
}

bool AHbkVFXActorBase::CopyAkComp2SoundInfo() {
    return false;
}


