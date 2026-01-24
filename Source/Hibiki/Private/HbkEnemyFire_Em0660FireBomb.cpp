#include "HbkEnemyFire_Em0660FireBomb.h"
#include "AkComponent.h"

AHbkEnemyFire_Em0660FireBomb::AHbkEnemyFire_Em0660FireBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkCompMain = CreateDefaultSubobject<UAkComponent>(TEXT("AkCompMain"));
    this->SE_OnExplosion = NULL;
    this->SE_OnDelete = NULL;
    this->AkCompMain->SetupAttachment(RootComponent);
}


