#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "HbkPlayerControllerBase.generated.h"

class UMediaSoundComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerControllerBase : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* MediaSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartnerRequestActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightTriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftTriggerName;
    
public:
    AHbkPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool CallInputKey(FKey Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool Gamepad);
    
};

