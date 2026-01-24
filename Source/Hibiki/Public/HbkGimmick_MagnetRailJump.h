#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SplineMagnetBase.h"
#include "MagnetRailJumpDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_MagnetRailJump.generated.h"

class AHbkGimmick_MagnetRailJumpRail;
class AHbkPlayerCharacterBase;
class UAkAudioEvent;
class UDamageType;
class UHbkMagneticPointComponent;

UCLASS(Blueprintable)
class AHbkGimmick_MagnetRailJump : public AHbkGimmick_SplineMagnetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagnetRailJumpDelegate OnFailureRestart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagnetRailJumpDelegate OnSuccessBeforeNote;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_MagnetRailJumpRail* JumpRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailureIsGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputStartNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputJustNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputEndNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RailEndNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> InputSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InputSeRef;
    
public:
    AHbkGimmick_MagnetRailJump(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMagnetRelease(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* Magnet);
    
    UFUNCTION(BlueprintCallable)
    void NextMagnetOnEndInputResultAnim();
    
};

