#include "HbkProjectile_Em0650Tornado.h"
#include "AkComponent.h"
#include "HbkPartnerTargetPointComponent.h"

AHbkProjectile_Em0650Tornado::AHbkProjectile_Em0650Tornado(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartnerTargetPointComp_Korsica = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint_Korsica"));
    this->FlyingHeightDefault = 130.00f;
    this->FlyingHeightInterpSpeed = 3.00f;
    this->GroundCheckLength = 5000.00f;
    this->AllowGroundAngle = 70.00f;
    this->DirCheckOffsetPosInterpSpeed = 10.00f;
    this->DirCheckOffsetPosTargetLength = 10.00f;
    this->AutoDestroyNoteCount = 12.00f;
    this->InterpSpeedBetweenMoveSpeed = 5.00f;
    this->CheckMoveDirLength = 150.00f;
    this->RotInterpSpeedOnDirCheck = 8.00f;
    this->MainEffect = NULL;
    this->DeactiveEffect = NULL;
    this->SE_AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("SE_AkComponent"));
    this->AkEvent_Launch = NULL;
    this->AkEvent_Hit = NULL;
    this->AkEvent_Delete = NULL;
    this->SE_AkComponent->SetupAttachment(RootComponent);
    this->PartnerTargetPointComp_Korsica->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em0650Tornado::Receive_OnBeginRhythmparry() {
}

void AHbkProjectile_Em0650Tornado::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}


