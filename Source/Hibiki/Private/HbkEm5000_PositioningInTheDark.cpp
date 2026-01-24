#include "HbkEm5000_PositioningInTheDark.h"

AHbkEm5000_PositioningInTheDark::AHbkEm5000_PositioningInTheDark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RowSize = 290.00f;
    this->ColumnSize = 288.50f;
    this->RowCount = 10;
    this->ColumnCount = 17;
    this->SectionRowBegin = 2;
    this->SectionRowEnd = 7;
    this->SectionColumnBegin = 4;
    this->SectionColumnEnd = 12;
    this->SectionRowCount = 6;
    this->SectionColumnCount = 5;
    this->PositioningSections.AddDefaulted(30);
    this->TestRow = 0;
    this->TestColumn = 0;
    this->TestSectionMaskType = EHbkPositioningInTheDarkMaskType::Cross;
}

void AHbkEm5000_PositioningInTheDark::TestSectionMaskFromPlayer() {
}

void AHbkEm5000_PositioningInTheDark::TestResetSectionMask() {
}

void AHbkEm5000_PositioningInTheDark::TestGetSectionForPlayer() {
}

void AHbkEm5000_PositioningInTheDark::TestGetRandomSectionPosition() {
}

void AHbkEm5000_PositioningInTheDark::TestGetPosition() {
}

void AHbkEm5000_PositioningInTheDark::SectionMaskFromPlayer(EHbkPositioningInTheDarkMaskType MaskType) {
}

void AHbkEm5000_PositioningInTheDark::SectionMaskFormSectionNo(int32 SectionNo, EHbkPositioningInTheDarkMaskType MaskType) {
}

void AHbkEm5000_PositioningInTheDark::SectionMask(int32 Row, int32 Column) {
}

void AHbkEm5000_PositioningInTheDark::ResetSectionMask() {
}

FVector AHbkEm5000_PositioningInTheDark::GetSectionPosition(int32 SectionNo) {
    return FVector{};
}

int32 AHbkEm5000_PositioningInTheDark::GetSectionNoFromPosition(FVector Position) {
    return 0;
}

int32 AHbkEm5000_PositioningInTheDark::GetSectionNo(int32 Row, int32 Column) {
    return 0;
}

float AHbkEm5000_PositioningInTheDark::GetRowSize() const {
    return 0.0f;
}

int32 AHbkEm5000_PositioningInTheDark::GetRowCount() const {
    return 0;
}

int32 AHbkEm5000_PositioningInTheDark::GetRow(FVector Position) {
    return 0;
}

FVector AHbkEm5000_PositioningInTheDark::GetRandomSectionPosition(EHbkPositioningInTheDarkMaskType MaskType) {
    return FVector{};
}

FVector AHbkEm5000_PositioningInTheDark::GetPosition(int32 Row, int32 Column) {
    return FVector{};
}

float AHbkEm5000_PositioningInTheDark::GetColumnSize() const {
    return 0.0f;
}

int32 AHbkEm5000_PositioningInTheDark::GetColumnCount() const {
    return 0;
}

int32 AHbkEm5000_PositioningInTheDark::GetColumn(FVector Position) {
    return 0;
}


