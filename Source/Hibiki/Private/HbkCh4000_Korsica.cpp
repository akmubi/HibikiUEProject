#include "HbkCh4000_Korsica.h"

AHbkCh4000_Korsica::AHbkCh4000_Korsica(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AHbkCh4000_Korsica::OnKorsicaGimmickProgress(EHbkKorsicaGimmickProgress GameResult) {
}

void AHbkCh4000_Korsica::OnKorsicaGimmickInput(EHbkKorsicaGimmickInputType InputResult) {
}

FName AHbkCh4000_Korsica::GetPartnerActionSectionName(int32 Progress) const {
    return NAME_None;
}




