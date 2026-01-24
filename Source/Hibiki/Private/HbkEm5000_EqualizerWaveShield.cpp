#include "HbkEm5000_EqualizerWaveShield.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "HbkDamageComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEm5000_EqualizerWaveShield::AHbkEm5000_EqualizerWaveShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkEqualizerWaveShieldProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->bIsRequestFinish = false;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->SkeltalMeshComp = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SkeltalMesh"));
    this->DamageComp = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("Hbk Damage"));
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Comp"));
    this->SkeltalMeshComp->SetupAttachment(RootComponent);
    this->BoxComp->SetupAttachment(RootComponent);
}

void AHbkEm5000_EqualizerWaveShield::RequestLaunch() {
}

void AHbkEm5000_EqualizerWaveShield::RequestFinish(bool Immediately) {
}

EHbkEqualizerWaveShieldProcess AHbkEm5000_EqualizerWaveShield::GetProcess() const {
    return EHbkEqualizerWaveShieldProcess::None;
}

void AHbkEm5000_EqualizerWaveShield::AttachTarget(AActor* Actor, FName SocketName) {
}


