#include "HbkItemBase.h"
#include "HbkGameAgentComponent.h"
#include "HbkRhythmSynchroComponent.h"

AHbkItemBase::AHbkItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->ItemMeshComp = NULL;
    this->CollisionComp = NULL;
    this->ItemObjectClass = NULL;
    this->ItemOffsetHeight = 0.00f;
    this->bInitHidden = false;
    this->bInitEnableTouch = true;
    this->UseItemSound = NULL;
    this->SpawnDrawInClass = NULL;
    this->bIsInitItem = false;
    this->bDisableDrawIn = false;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

void AHbkItemBase::PlaySoundAndEffect(int32 NoteCount) {
}

void AHbkItemBase::OnDrawIn(AHbkCharacter* Character) {
}

void AHbkItemBase::OnCollisionOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkItemBase::OnCollisionOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkItemBase::Multicast_UseItem_Implementation(AHbkCharacter* Character) {
}

void AHbkItemBase::ItemDestroy() {
}

bool AHbkItemBase::Invoke_PlayerTakeItem(AActor* User, const FGameplayTag InventoryId, int32 Count) {
    return false;
}

bool AHbkItemBase::Invoke_DrawIn(AHbkCharacter* Character) {
    return false;
}

void AHbkItemBase::GetSaveParameter(FName& SaveName, int32& SaveAmount) {
}


