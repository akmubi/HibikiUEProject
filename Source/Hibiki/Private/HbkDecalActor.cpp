#include "HbkDecalActor.h"
#include "HbkDecalComponent.h"

AHbkDecalActor::AHbkDecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkDecalComponent>(TEXT("NewDecalComponent"))) {
    const FProperty* p_Decal = GetClass()->FindPropertyByName("Decal");
    (*p_Decal->ContainerPtrToValuePtr<UDecalComponent*>(this)) = (UDecalComponent*)RootComponent;
}


