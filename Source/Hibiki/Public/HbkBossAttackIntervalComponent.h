#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossAttackIntervalPermitAttackDelegateDelegate.h"
#include "EHbkNote.h"
#include "HbkBossAttackIntervalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBossAttackIntervalComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCountDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPermitAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote IntervalNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntervalNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedNoteCount;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossAttackIntervalPermitAttackDelegate OnPermitAttack;
    
public:
    UHbkBossAttackIntervalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAttackInterval(EHbkNote Note, int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttackInterval();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeatEventEx(int32 NoteCount, bool downBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPermitAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void ForcePermitAttack();
    
};

