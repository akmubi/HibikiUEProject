#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVScrollSignboard.generated.h"

class AActor;
class UHbkGameplayTask_EVScrollBattle;
class UHbkGameplayTask_EVScrollSignboard;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVScrollSignboard : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollSignboard_OnSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollSignboard_OnSuccess OnNoDamageSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollSignboard_OnSuccess OnDamageSuccess;
    
    UHbkGameplayTask_EVScrollSignboard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SyncNoteWhole(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent_G0(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent_E2(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent_D2(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent_C2(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent_C1(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent_C0(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void FallingObj_Attack(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVScrollSignboard* EventScrollSignboard(UObject* WorldContextObject, UHbkGameplayTask_EVScrollBattle* scrollTask, int32 Type, FGameplayTag signboardTag);
    
};

