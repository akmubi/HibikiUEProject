#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "EHbkEqualizerWaveGeneratorProcess.h"
#include "EHbkNote.h"
#include "EHbkTakeDamagePresetCategory.h"
#include "EqualizerWaveGeneratorEndDelegateDelegate.h"
#include "HbkAutoActionInterface.h"
#include "HbkEm5000_EqualizerWaveGenerator.generated.h"

class AController;
class UAkAudioEvent;
class UAkComponent;
class UCurveFloat;
class UDamageType;
class UHbkBarrierComponent;
class UHbkBezierMoveComponent;
class UHbkDamageComponent;
class UHbkMimosaTargetPointComponent;
class UHbkPartnerAppearPointComponent;
class UHbkPartnerTargetPointComponent;
class UHbkRepulsionComponent;
class UHbkRhythmSynchroComponent;
class UHbkSkeletalMeshComponent;
class UParticleSystem;
class USceneComponent;

UCLASS(Blueprintable)
class AHbkEm5000_EqualizerWaveGenerator : public AActor, public IHbkAutoActionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEqualizerWaveGeneratorEndDelegate OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEqualizerWaveGeneratorProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequestFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AttachTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LocationTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InstallationPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BezierStartControlOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BezierEndControlOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote BezierNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BezierNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> BezierEasingFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BezierCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BezierAdjustRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote EndNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OwnerBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeDamagePresetCategory TakeDamagePresetCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeDamagePresetCategory PrevTakeDamagePresetCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BarrierBreakParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShieldBreakParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BreakParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EmitterSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SkeltalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* DamageComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBezierMoveComponent* BezierMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRepulsionComponent* RepulsionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPartnerTargetPointComponent* PartnerTargetPointComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPartnerAppearPointComponent* PartnerAppearPointComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkMimosaTargetPointComponent* TargetpointComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBarrierComponent* BarrierComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TestAttachTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TestAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TestTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TestInstallationPosition;
    
public:
    AHbkEm5000_EqualizerWaveGenerator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestProcessLaunch();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessInstalled();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessEnd();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessDuringInstallation();
    
    UFUNCTION(BlueprintCallable)
    void TestProcessAttach();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartLaunch();
    
    UFUNCTION(BlueprintCallable)
    void StartDuringInstallation(AActor* LocationActor, const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void StartAttach(AActor* TargetActor, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetTakeDamagePreset(EHbkTakeDamagePresetCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void RequestFinish();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthBecomedZero();
    
    UFUNCTION(BlueprintCallable)
    void OnBeizerEndMove(bool IsCompleted);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDied(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEqualizerWaveGeneratorProcess GetProcess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkTakeDamagePresetCategory GetPrevDamagePreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetTakeDamagePreset(EHbkTakeDamagePresetCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    

    // Fix for true pure virtual functions not being implemented
};

