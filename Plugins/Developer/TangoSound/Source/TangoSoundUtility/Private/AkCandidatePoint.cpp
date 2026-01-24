#include "AkCandidatePoint.h"
#include "AkCandidatePointComponent.h"

AAkCandidatePoint::AAkCandidatePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<UAkCandidatePointComponent>(TEXT("Ak_CandidatePoint"));
    this->AkCandidatePointComponent = (UAkCandidatePointComponent*)RootComponent;
    this->Speaker = NULL;
}


