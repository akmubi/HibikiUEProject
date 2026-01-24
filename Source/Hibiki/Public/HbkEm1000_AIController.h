#pragma once
#include "CoreMinimal.h"
#include "HbkBossAIController.h"
#include "HbkEm1000_AIController.generated.h"

UCLASS(Blueprintable)
class AHbkEm1000_AIController : public AHbkBossAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SyncAttack1UserCueName;
    
public:
    AHbkEm1000_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextAttackBeatCount(int32 Count);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetGuitarRiffAttackReady(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetGuitarRiffAttackExec(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncMusicAttack1(int32 CallCount);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePhase(int32 PhaseNum);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnBarEvent(int32 BarCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTryGuitarRiffAttack() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetGuitarRiffAttackReady();
    
    UFUNCTION(BlueprintCallable)
    bool GetGuitarRiffAttackExec();
    
public:
    UFUNCTION(BlueprintCallable)
    void DoesMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMove() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSyncMusicAttack1(int32 CallCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnGuitarRiffAttack(int32 BarCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddNextAttackBeatCount(int32 Count);
    
};

