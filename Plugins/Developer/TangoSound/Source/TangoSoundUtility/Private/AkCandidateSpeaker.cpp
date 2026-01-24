#include "AkCandidateSpeaker.h"
#include "AkCandidateComponent.h"

AAkCandidateSpeaker::AAkCandidateSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkCandidateComponent>(TEXT("Ak_Candidate"));
    this->AkCandidateComponent = (UAkCandidateComponent*)RootComponent;
}


