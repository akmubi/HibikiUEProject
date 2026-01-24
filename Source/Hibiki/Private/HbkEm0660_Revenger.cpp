#include "HbkEm0660_Revenger.h"
#include "AkComponent.h"
#include "HbkEnemyBurningComponent.h"
#include "HbkEnemyGrapplingEventComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEm0660_Revenger::AHbkEm0660_Revenger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReactionCommonDamageSectionName_OnTired.AddDefaulted(3);
    this->HbkEmBurningComp = CreateDefaultSubobject<UHbkEnemyBurningComponent>(TEXT("BurningComp"));
    this->HbkEmGrapplingEventComp = CreateDefaultSubobject<UHbkEnemyGrapplingEventComponent>(TEXT("GrapplingEventComp"));
    this->pWWThrowSlashEffect = NULL;
    this->LaunchBombNum = 3;
    this->LaunchBombDivRangeRate = 0.50f;
    this->LaunchBombPointIdealDistance = 1000.00f;
    this->LaunchBombPointOffsetLimit = 500.00f;
    this->BombLayCheckLength = 2000.00f;
    this->GroundCheckOffsetHeight = 50.00f;
    this->BombThrowPointRandomOffsetRange = 200.00f;
    this->BombThrowPointDivDistance = 550.00f;
    this->BombThrowPointLimitRate_Axis = 0.80f;
    this->BombThrowPointLimitRate_Horizontal = 1.60f;
    this->BombThrowPointBackDistanceOnHit = 50.00f;
    this->BombThrowPointSearchNum_Axis = 10;
    this->pFireBombMainEffect = NULL;
    this->pFireBombSmokeEffect = NULL;
    this->SimpleRhythmWingClass = NULL;
    this->MaxBeamCount = 4;
    this->ExplosionBeamLength = 2500.00f;
    this->ExplosionBeamHeightLimit = 350.00f;
    this->ExplosionBeamLineCheckLength = 8000.00f;
    this->ExplosionBeamLineEffectSpawnDistance = 125.00f;
    this->ExplosionBeamAttackCompTagName = TEXT("ExplosionBeamAttackComponent");
    this->ExplosionEffectSpawnDistance = 400.00f;
    this->ExplosionBeamMoveProgress = NULL;
    this->pExplosionLineEffect = NULL;
    this->pExplosionAttackEffect = NULL;
    this->pExplosionBeamEffect = NULL;
    this->AkComp_ExBeam1 = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp_ExBeam1"));
    this->AkComp_ExBeam2 = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp_ExBeam2"));
    this->AkCompForSwitch = CreateDefaultSubobject<UAkComponent>(TEXT("AkCompForSwitch"));
    this->SE_ExBeam_Launch = NULL;
    this->SE_ExBeam_Delete = NULL;
    this->SE_ExBeam_Explosion = NULL;
    this->AutoActionPriorityKorsicaHeight = 300.00f;
    this->SE_OnDamage = NULL;
    this->SlowTimeCount = 3.00f;
    this->AkComp_ExBeam1->SetupAttachment(RootComponent);
    this->AkComp_ExBeam2->SetupAttachment(RootComponent);
    this->AkCompForSwitch->SetupAttachment(GetMesh());
}

void AHbkEm0660_Revenger::SetUpProjectile(FName SlotName, AHbkProjectile* Projectile) {
}

void AHbkEm0660_Revenger::OnWingBackToBody(AHbkProjectile* Projectile) {
}


