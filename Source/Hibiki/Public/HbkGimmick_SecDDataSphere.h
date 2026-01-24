#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_SecDDataSphereBG0370_AnimType_t.h"
#include "EHbkGimmick_SecDDataSphereSaveType.h"
#include "EHbkGimmick_SecDDataSphereType_t.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SecDDataSphereBeatHitSoundInfo_t.h"
#include "HbkGimmick_SecDDataSphereBeatInfo_t.h"
#include "HbkGimmick_SecDDataSphereFallingInfo_t.h"
#include "HbkGimmick_SecDDataSphereMidiInfo_t.h"
#include "HbkGimmick_SecDDataSphereSoundInfo_t.h"
#include "HbkGimmick_SecDDataSphereTagInfo_t.h"
#include "HbkGimmick_SecDDataSphere.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SecDDataSphere : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_SecDDataSphere_Success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_SecDDataSphere_PartnerTargetDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_SecDDataSphere_Interact);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_SecDDataSphere_Failure);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphere_Success OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphere_Success OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphere_Interact OnInteracted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_SecDDataSphereSaveType SaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float debugDrawDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_SecDDataSphereType_t> dsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_SecDDataSphereBG0370_AnimType_t> AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphereTagInfo_t SuccessTagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphereTagInfo_t FailureTagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_SecDDataSphereMidiInfo_t> midiInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_SecDDataSphereBeatInfo_t> BeatInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphereSoundInfo_t soundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphereBeatHitSoundInfo_t BeatHitSoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphereFallingInfo_t FallingInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphere_PartnerTargetDelegate OnPartnerDecidedToTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphere_PartnerTargetDelegate OnPartnerTargetBeginAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDDataSphere_PartnerTargetDelegate OnPartnerTargetSuccessAction;
    
public:
    AHbkGimmick_SecDDataSphere(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActivateInteract(const bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetPointSuccessAction();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetPointDecidedToTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetPointBeginAction();
    
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_SecDDataSphere(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter_SecDDataSphere(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteHalf_SecDDataSphere(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote8th_SecDDataSphere(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote16th_SecDDataSphere(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveStart();
    
    UFUNCTION(BlueprintCallable)
    void OnMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceLoadEnd();
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent_SecDDataSphere(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationOpenRate();
    
};

