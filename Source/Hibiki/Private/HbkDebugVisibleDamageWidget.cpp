#include "HbkDebugVisibleDamageWidget.h"

UHbkDebugVisibleDamageWidget::UHbkDebugVisibleDamageWidget() {
    this->DebugVisibleDamagePartsWidgetClass = NULL;
    this->OwnerCharacter = NULL;
    this->OwnerWidget = NULL;
    this->DamageComponent = NULL;
    this->ToughComponent = NULL;
    this->BaseOverlay = NULL;
    this->PartsCanvas = NULL;
    this->ToughPartsCanvas = NULL;
}

void UHbkDebugVisibleDamageWidget::Notify_ToughDamage(float PreToughValue, float DamagedToughValue) {
}

void UHbkDebugVisibleDamageWidget::Notify_Damage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


