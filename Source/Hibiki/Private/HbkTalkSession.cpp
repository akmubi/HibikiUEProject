#include "HbkTalkSession.h"
#include "Components/SceneComponent.h"

AHbkTalkSession::AHbkTalkSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->TalkData = NULL;
}

void AHbkTalkSession::SetTalkLine(const FName& NewLine) {
}

void AHbkTalkSession::SetTalkData(UDataTable* NewData) {
}

void AHbkTalkSession::SetTalkAutoStep(bool NewFlag) {
}





