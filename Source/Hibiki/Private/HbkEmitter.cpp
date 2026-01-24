#include "HbkEmitter.h"
#include "HbkParticleSystemComponent.h"

AHbkEmitter::AHbkEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkParticleSystemComponent>(TEXT("ParticleSystemComponent0"))) {
    const FProperty* p_ParticleSystemComponent = GetClass()->FindPropertyByName("ParticleSystemComponent");
    (*p_ParticleSystemComponent->ContainerPtrToValuePtr<UParticleSystemComponent*>(this)) = (UParticleSystemComponent*)RootComponent;
}


