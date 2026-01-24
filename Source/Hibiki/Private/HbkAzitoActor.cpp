#include "HbkAzitoActor.h"
#include "HbkGameAgentComponent.h"

AHbkAzitoActor::AHbkAzitoActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AzitoData = NULL;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

void AHbkAzitoActor::RecieveNpcTalkEnd(AActor* InTalker, const FName InTalkResultOption) {
}

void AHbkAzitoActor::RecieveNpcTalkCue(AActor* InTalker, const FName InTalkCue) {
}

void AHbkAzitoActor::RecieveNpcTalkBegin(AActor* InTalker) {
}

bool AHbkAzitoActor::EndAzitoCamera(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing) {
    return false;
}

void AHbkAzitoActor::DeployContents(int32 StateNo) {
}

bool AHbkAzitoActor::BeginAzitoCameraVGW(APlayerController* Controller, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, float MainCamDist) {
    return false;
}

bool AHbkAzitoActor::BeginAzitoCamera(APlayerController* Controller, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing) {
    return false;
}


