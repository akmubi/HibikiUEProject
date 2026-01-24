#include "HbkEm0810_ArmBlade.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkImproveAttackComponent.h"
#include "HbkStaticMeshComponent.h"

AHbkEm0810_ArmBlade::AHbkEm0810_ArmBlade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->RotateCoreComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RotateCore"));
    this->MeshComponent = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("Mesh"));
    this->ImproveAttackComponent = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("ImproveAttack"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->pAkAttackSign = NULL;
    this->pAkAttackSign2 = NULL;
    this->pAkBladeCount = NULL;
    this->pAkBladeCount2 = NULL;
    this->pAkBladeLaunch = NULL;
    this->pAkBladeLaunch2 = NULL;
    this->pAkIdling = NULL;
    this->pAkBladeEnd = NULL;
    this->ShootLine = NULL;
    this->psShootLine = NULL;
    this->IdleEffectLeft = NULL;
    this->IdleEffectRight = NULL;
    this->psIdleEffect = NULL;
    this->BladeRotateValue = 30.00f;
    this->pMoveRateCurve = NULL;
    this->CallToLaunchNoteCount = 3.00f;
    this->RotateCoreComponent->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RotateCoreComponent);
    this->ImproveAttackComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}


