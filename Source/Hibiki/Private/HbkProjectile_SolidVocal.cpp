#include "HbkProjectile_SolidVocal.h"
#include "AkComponent.h"
#include "HbkDamageComponent.h"
#include "HbkPartnerTargetPointComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkProjectile_SolidVocal::AHbkProjectile_SolidVocal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Process = EHbkEm5000SolidVocalProcess::None;
    this->ProcessNo = 0;
    this->BaseScale = 1.00f;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->LyricsType = EHbkSolidVocalLyricsType::Note1;
    this->NoteToReachAppearance = EHbkNote::Note_Quarter;
    this->NoteCountToReachAppearance = 1;
    this->AppearanceLocationMag = 1.00f;
    this->NoteTypeOfOnYourMark = EHbkNote::Note_Quarter;
    this->NoteCountOfOnYourMark = 2;
    this->EasingFuncOfOnYourMark = EEasingFunc::Linear;
    this->BlendExpOfOnYourMark = 2.00f;
    this->StepsOfOnYourMark = 2;
    this->BeginFollowSpeed = 0.00f;
    this->EndFollowSpeed = 40.00f;
    this->NowFollowSpeed = 0.00f;
    this->NoteToReachFollow = EHbkNote::Note_Quarter;
    this->NoteCountToReachFollow = 1.00f;
    this->NoteTypeOfAssaultSign = EHbkNote::Note_Quarter;
    this->NoteCountOfAssaultSign = 1;
    this->NoteTypeOfAssault = EHbkNote::Note_Quarter;
    this->NoteCountOfAssault = 1;
    this->BeginAssaultSpeed = 0.00f;
    this->EndAssaultSpeed = 100.00f;
    this->bIsSyncAttackTargetLocation = false;
    this->AimType = EHbkSolidVocalAimType::Sign;
    this->NowAssaultSpeed = 0.00f;
    this->NoteTypeOfBreak = EHbkNote::Note_Quarter;
    this->NoteCountOfBreak = 4;
    this->NoteTypeOfExplode = EHbkNote::Note_Quarter;
    this->NoteCountOfExplode = 1;
    this->SignParticle = NULL;
    this->bIsLifespan = false;
    this->LifespanNote = EHbkNote::Note_Quarter;
    this->LifeSpanNoteCount = 8;
    this->LifespanTime = 0.00f;
    this->TraceType = TraceTypeQuery1;
    this->TraceRadius = 0.00f;
    this->ScaleAppearance = 6.00f;
    this->ScaleFollow = 3.00f;
    this->bIsScaleUpdate = false;
    this->ScaleMin = 1.00f;
    this->ScaleMax = 1.00f;
    this->ScaleNoteTimeMax = 0.00f;
    this->ScaleNoteTime = 0.00f;
    this->NoteTypeOfScale = EHbkNote::Note_Quarter;
    this->NoteCountOfScale = 1.00f;
    this->ScaleEasingFunc = EEasingFunc::Linear;
    this->ScaleBlendExp = 2.00f;
    this->ScaleSteps = 2;
    this->bIsCurveScale = false;
    this->CurveScaleTimeMax = 0.00f;
    this->CurveScaleTime = 0.00f;
    this->CurveScaleMag = 1.00f;
    this->NoteTypeOfCurveScale = EHbkNote::Note_Quarter;
    this->CurveScaleValue = 1.00f;
    this->AttackTargetSurroundDistance = 0.00f;
    this->bIsAttackTargetRotateY = false;
    this->AttackTargetOffsetRotateY = 0.00f;
    this->AttackTargetScaleForRotate = 0.00f;
    this->bIsExplode = false;
    this->ProjectileIndex = -1;
    this->ExplodeDamageType = NULL;
    this->ExplodeRadius = 200.00f;
    this->StayParticle = NULL;
    this->LaunchParticle = NULL;
    this->GroundParticle = NULL;
    this->ExplodeParticle = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->SubAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("SubAKComp"));
    this->DamageComponent = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->PartnerTargetPointComp = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint"));
    this->SkeltalMeshComponent_LaLa = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_LaLa"));
    this->SkeltalMeshComponent_Woo = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_Woo"));
    this->SkeltalMeshComponent_Ooo = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_Ooo"));
    this->SkeltalMeshComponent_DaDa = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_DaDa"));
    this->SkeltalMeshComponent_C = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_C"));
    this->SkeltalMeshComponent_D = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_D"));
    this->SkeltalMeshComponent_E = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_E"));
    this->SkeltalMeshComponent_F = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_F"));
    this->SkeltalMeshComponent_G = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_G"));
    this->SkeltalMeshComponent_A = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_A"));
    this->SkeltalMeshComponent_B = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_B"));
    this->SkeltalMeshComponent_Note1 = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_Note1"));
    this->SkeltalMeshComponent_Note2 = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_Note2"));
    this->SkeltalMeshComponent_Note3 = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_Note3"));
    this->SkeltalMeshComponent_Ah = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeltalMesh_Ah"));
    this->VectorCurve = NULL;
    this->ScaleCurve = NULL;
    this->SkeltalMeshComponent_B->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_Note1->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_Note2->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_Note3->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_Ah->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->SubAkComponent->SetupAttachment(RootComponent);
    this->PartnerTargetPointComp->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_LaLa->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_Woo->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_Ooo->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_DaDa->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_C->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_D->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_E->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_F->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_G->SetupAttachment(RootComponent);
    this->SkeltalMeshComponent_A->SetupAttachment(RootComponent);
}

void AHbkProjectile_SolidVocal::TestOnYourMark() {
}

void AHbkProjectile_SolidVocal::TestFollow() {
}

void AHbkProjectile_SolidVocal::TestAssault() {
}

void AHbkProjectile_SolidVocal::OnHealthBecomedZero() {
}

void AHbkProjectile_SolidVocal::OnActorDied(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}


