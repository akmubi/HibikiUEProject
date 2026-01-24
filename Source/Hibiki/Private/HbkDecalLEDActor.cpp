#include "HbkDecalLEDActor.h"
#include "HbkDecalLEDComponent.h"

AHbkDecalLEDActor::AHbkDecalLEDActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkDecalLEDComponent>(TEXT("NewDecalComponent"))) {
    const FProperty* p_Decal = GetClass()->FindPropertyByName("Decal");
    (*p_Decal->ContainerPtrToValuePtr<UDecalComponent*>(this)) = (UDecalComponent*)RootComponent;
}


