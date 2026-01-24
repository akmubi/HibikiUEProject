#include "HbkRhythmScoreAsset.h"

UHbkRhythmScoreAsset::UHbkRhythmScoreAsset() {
    this->OffsetTime = 2.00f;
    this->BarTime = 2.00f;
}

TArray<FHbkRhythmNoteParam> UHbkRhythmScoreAsset::GetRhythmScore() const {
    return TArray<FHbkRhythmNoteParam>();
}

float UHbkRhythmScoreAsset::GetOffsetTime() const {
    return 0.0f;
}


