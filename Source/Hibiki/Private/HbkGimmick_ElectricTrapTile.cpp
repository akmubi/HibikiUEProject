#include "HbkGimmick_ElectricTrapTile.h"
#include "Templates/SubclassOf.h"

AHbkGimmick_ElectricTrapTile::AHbkGimmick_ElectricTrapTile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AHbkGimmick_ElectricTrapTile::SetGenerator(AActor* Object, int32 Index) {
}

void AHbkGimmick_ElectricTrapTile::SetFloor(AActor* Object, int32 X, int32 Y) {
}

void AHbkGimmick_ElectricTrapTile::OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkGimmick_ElectricTrapTile::OnEndSpecialAttack() {
}

void AHbkGimmick_ElectricTrapTile::OnEndRhythmParryAttack() {
}

void AHbkGimmick_ElectricTrapTile::OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkGimmick_ElectricTrapTile::OnEndJamComboAttack() {
}

void AHbkGimmick_ElectricTrapTile::OnBeginSpecialAttack(bool bIncludingCamera) {
}

void AHbkGimmick_ElectricTrapTile::OnBeginRhythmParryAttack() {
}

void AHbkGimmick_ElectricTrapTile::OnBeginJamComboAttack() {
}

void AHbkGimmick_ElectricTrapTile::OnAttackStart(const FString& UserString) {
}

int32 AHbkGimmick_ElectricTrapTile::GetLayoutDivNumY() const {
    return 0;
}

int32 AHbkGimmick_ElectricTrapTile::GetLayoutDivNumX() const {
    return 0;
}

FTransform AHbkGimmick_ElectricTrapTile::GetGeneratorTransform(int32 Index) const {
    return FTransform{};
}

TSubclassOf<AHbkGimmick_ElectricTrapGenerator> AHbkGimmick_ElectricTrapTile::GetGeneratorClass(int32 Index) const {
    return NULL;
}

FTransform AHbkGimmick_ElectricTrapTile::GetFloorTransform(int32 X, int32 Y) const {
    return FTransform{};
}

TSubclassOf<AHbkGimmick_ElectricTrapFloor> AHbkGimmick_ElectricTrapTile::GetFloorClass(int32 X, int32 Y) const {
    return NULL;
}

void AHbkGimmick_ElectricTrapTile::ClearGenerator() {
}

void AHbkGimmick_ElectricTrapTile::ClearFloor() {
}


