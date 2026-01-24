#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AttackInterface.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_FireGate_MiniGameInfo_t.h"
#include "HbkGimmick_FireGate_ParamInfo_t.h"
#include "HbkGimmick_FireGate_SoundInfo_t.h"
#include "HbkGimmick_FireGate_VfxInfo_t.h"
#include "HbkGimmick_FireGate.generated.h"

class AActor;
class AController;
class UBoxComponent;
class UDamageType;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_FireGate : public AHbkGimmickBase, public IAttackInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_FireGateDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_FireGateDelegate OnSuccessAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_FireGateDelegate OnFailedAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_FireGate_MiniGameInfo_t MiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_FireGate_SoundInfo_t soundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_FireGate_VfxInfo_t vfxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_FireGate_ParamInfo_t ParamInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* pBoxCollision;
    
public:
    AHbkGimmick_FireGate(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopFireVFX();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetSuccessAction();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetLockOn();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetFailedAction();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetEndPartnerMiniGame();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetBeginPartnerMiniGame();
    
    UFUNCTION(BlueprintCallable)
    void OnNoteEvent_FireGate(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteEvent_FireDamage(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote16thEvent_FireGate(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    

    // Fix for true pure virtual functions not being implemented
};

