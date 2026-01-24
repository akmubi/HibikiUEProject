#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkNpcCharacter.h"
#include "HbkAm1000_Pigeon.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class AHbkAm1000_Pigeon : public AHbkNpcCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool runAwayFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlyFarFlag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FlyFarTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FlyFarMoveSpeedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StartFlyFarSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartFlyFarSeRef;
    
public:
    AHbkAm1000_Pigeon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float GetRandomStartTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandomAnimValue();
    
    UFUNCTION(BlueprintCallable)
    float GetRandomAnimSpeed();
    
};

