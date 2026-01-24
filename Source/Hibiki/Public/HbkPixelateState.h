#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPixelateState.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UHbkPixelateState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GlitchSE;
    
public:
    UHbkPixelateState();

};

