#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EHbkPlayerControlMode.h"
#include "HbkCharacter.h"
#include "HbkRhythmSignOffsetInfo.h"
#include "RhythmSignActionDelegateDelegate.h"
#include "RhythmSignColorChangeDelegateDelegate.h"
#include "RhythmSignEmissiveDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkRhythmSign.generated.h"

class AHbkAm0000_CatMode2;
class UAkAudioEvent;
class UAnimMontage;
class UAnimSequenceBase;
class UCurveFloat;
class UHbkCostumeComponent;
class UHbkCostumeMeshComponent;
class UHbkRhythmSignAsset;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AHbkRhythmSign : public AHbkCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmSignActionDelegate OnOpenShutter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmSignActionDelegate OnCloseShutter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmSignActionDelegate OnFinishedShutter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmSignColorChangeDelegate OnColorChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmSignEmissiveDelegate OnEmissiveChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* HbkCostumeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeComponent* HbkCostumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AddPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CommunicationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinEmissiveIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEmissiveIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BeatSignCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> JustTimingEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* JustTimingAppendEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JustTimingColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> BeatEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> JumpCountEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> JumpCountOnceEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkRhythmSignAsset* RhythmSignAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkAm0000_CatMode2> CatMode2ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPlayerControlMode, FHbkRhythmSignOffsetInfo> OffsetInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> SearchTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SearchItemEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SearchItemSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRangeDistance;
    
public:
    AHbkRhythmSign(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAnimation_CatMode(float BlendOut);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation(float BlendOut);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnParticle(UParticleSystem* Particle, UAkAudioEvent* AkEvent, bool bAttach, FName AttachName);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnimation_CatMode(UAnimSequenceBase* Anim, float PlayRate, FName JumpSection);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnimation(UAnimSequenceBase* Anim, float PlayRate, UAnimSequenceBase* CatAnim, FName JumpSection);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetEndPlaySequencer();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetBeginPlaySequencer();
    
    UFUNCTION(BlueprintCallable)
    void OnStartCommunication(const FName Option);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectPartner(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmJumpSuccessLanding();
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmJumpModeStart(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmJumpFailed(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmJumpEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmJumpCountDown(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnResetControlMode(EHbkPlayerControlMode OldMode);
    
    UFUNCTION(BlueprintCallable)
    void OnPostApplyCostume();
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailStart();
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailEnd(bool bForceEnd);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimSwingR(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimSwingL(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimDie(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetRailAnimDamage(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OnJustTimingAction(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthDamage(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnEndCommunication(const FName Option);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeControlMode(EHbkPlayerControlMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAssistTargetDamage();
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpAnimSection_CatMode(const FName& NextSection);
    
    UFUNCTION(BlueprintCallable)
    void JumpAnimSection(const FName& NextSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkAm0000_CatMode2* GetCatModeActor() const;
    
};

