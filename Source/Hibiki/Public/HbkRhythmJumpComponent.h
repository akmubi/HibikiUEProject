#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "HbkRhythmJumpComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkRhythmJumpComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNewRhythmJumpParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RhythmJumpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LandingNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> JumpHeightLsit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatNum2ndJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> WarpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName activateCallSign;
    
public:
    UHbkRhythmJumpComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpSuccessLastInput();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpSuccessLanding();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpSuccessInput(int32 JumpCount);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpReachedJumpApex();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpOverLandingHeight();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpModeStart(int32 JumpCount);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpFailed(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpEnd();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRhythmJumpBeginJump();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyEndRhythmJumpMode(AActor* Receiver);
    
    UFUNCTION(BlueprintCallable)
    void NotifyBeginRhythmJumpMode(AActor* Receiver);
    
};

