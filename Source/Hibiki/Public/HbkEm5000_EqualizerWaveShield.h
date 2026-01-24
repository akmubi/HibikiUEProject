#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHbkEqualizerWaveShieldProcess.h"
#include "EqualizerWaveShieldDelegateDelegate.h"
#include "HbkEm5000_EqualizerWaveShield.generated.h"

class UBoxComponent;
class UHbkDamageComponent;
class UHbkRhythmSynchroComponent;
class UHbkSkeletalMeshComponent;

UCLASS(Blueprintable)
class AHbkEm5000_EqualizerWaveShield : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEqualizerWaveShieldDelegate OnLaunch;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEqualizerWaveShieldDelegate OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEqualizerWaveShieldProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequestFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SkeltalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* DamageComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComp;
    
public:
    AHbkEm5000_EqualizerWaveShield(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestLaunch();
    
    UFUNCTION(BlueprintCallable)
    void RequestFinish(bool Immediately);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEqualizerWaveShieldProcess GetProcess() const;
    
    UFUNCTION(BlueprintCallable)
    void AttachTarget(AActor* Actor, FName SocketName);
    
};

