#include "HbkEnemyShootingComponent.h"
#include "Net/UnrealNetwork.h"

UHbkEnemyShootingComponent::UHbkEnemyShootingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetActor = NULL;
    this->ObjectHitEffect = NULL;
}

void UHbkEnemyShootingComponent::StopShooting(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

int32 UHbkEnemyShootingComponent::StartShooting(int32 ShootingParamIndex) {
    return 0;
}

void UHbkEnemyShootingComponent::ResetAbortFlag() {
}

void UHbkEnemyShootingComponent::OnRep_ShootingRepParam() {
}

void UHbkEnemyShootingComponent::OnNextShoot(int32 NoteCount) {
}

void UHbkEnemyShootingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHbkEnemyShootingComponent, TargetActor);
    DOREPLIFETIME(UHbkEnemyShootingComponent, ShootingRepParam);
}


