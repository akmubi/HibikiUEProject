#include "HbkVS_StreamingGameState.h"
#include "Net/UnrealNetwork.h"

AHbkVS_StreamingGameState::AHbkVS_StreamingGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HibikiStreamer = NULL;
    this->StreamerFieldOfView = 0.00f;
    this->StreamerArmCameraSpeed = 0.00f;
    this->StreamerArmCameraInterpSpeed = 0.00f;
    this->StreamerArmCameraFixedXY = false;
    this->StreamerArmCameraLength = 0.00f;
    this->StreamerPlayerHealth = 0.00f;
    this->StreamerPlayerMaxHealth = 0.00f;
    this->StreamerPlayerDeathblowGaugeNum = 0;
    this->StreamerPlayerDeathblowGaugaRate = 0.00f;
}

void AHbkVS_StreamingGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHbkVS_StreamingGameState, HibikiStreamer);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerInputVector);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerCameraTransform);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerFieldOfView);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerArmCameraSpeed);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerArmCameraInterpSpeed);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerArmCameraFixedXY);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerArmCameraLength);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerPlayerHealth);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerPlayerMaxHealth);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerPlayerDeathblowGaugeNum);
    DOREPLIFETIME(AHbkVS_StreamingGameState, StreamerPlayerDeathblowGaugaRate);
}


