#include "HbkEm1000_StageController.h"
#include "HbkSpectrumInfoComponent.h"

AHbkEm1000_StageController::AHbkEm1000_StageController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SpectrumInfoComp = CreateDefaultSubobject<UHbkSpectrumInfoComponent>(TEXT("SpectrumInfoComp"));
    this->StagingDataTable = NULL;
    this->bBrokenHeadPartsL = false;
    this->bBrokenHeadPartsR = false;
    this->LeftHandHealth = 0.00f;
    this->RightHandHealth = 0.00f;
    this->IsIgnoreDisplayActivate = false;
    this->StartLyricsUserCueName = TEXT("LYRICS_IN");
}

void AHbkEm1000_StageController::OnUserCueNoLyrics() {
}

void AHbkEm1000_StageController::OnUserCueLyrics(int32 CallCount) {
}

void AHbkEm1000_StageController::OnOwnerChangeState(int32 StateIndex) {
}

void AHbkEm1000_StageController::OnOwnerChangePhase(int32 PhaseNumber) {
}

void AHbkEm1000_StageController::OnOwnerAttackImpact(const AHbkCharacter* Attacker) {
}

bool AHbkEm1000_StageController::IsBrokenHeadR() const {
    return false;
}

bool AHbkEm1000_StageController::IsBrokenHeadL() const {
    return false;
}

UHbkSpectrumInfoComponent* AHbkEm1000_StageController::GetSpectrumInfoComp() const {
    return NULL;
}

FVector AHbkEm1000_StageController::GetMoveBasePoint() {
    return FVector{};
}

void AHbkEm1000_StageController::EndToonMasking() {
}







void AHbkEm1000_StageController::BeginToonMasking() {
}


