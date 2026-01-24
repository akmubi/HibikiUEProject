#include "HbkBuoyancyVolme.h"

AHbkBuoyancyVolme::AHbkBuoyancyVolme(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinearDamping = 1.00f;
    this->AngularDamping = 2.00f;
}


