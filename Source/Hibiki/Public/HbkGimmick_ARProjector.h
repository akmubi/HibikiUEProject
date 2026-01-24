#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AHbkGimmick_ARProjectorCollision.h"
#include "AHbkGimmick_ARProjectorGlitch.h"
#include "AHbkGimmick_ARProjectorHologram.h"
#include "AHbkGimmick_ARProjectorPixelate.h"
#include "AHbkGimmick_ARProjectorSound.h"
#include "AHbkGimmick_ARProjectorVfx.h"
#include "EAHbkGimmick_ARProjectorAnimState.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ARProjector.generated.h"

class AActor;
class UDamageType;

UCLASS(Blueprintable)
class AHbkGimmick_ARProjector : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmick_ARProjector_Interact, int32, InteractCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_ARProjector_EndMacaronMiniGame);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_ARProjector_EndAppear);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ARProjector_EndAppear OnEndAppear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ARProjector_Interact OnInteracted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ARProjector_EndMacaronMiniGame OnEndMacaronMiniGame;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAHbkGimmick_ARProjectorGlitch Glitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAHbkGimmick_ARProjectorPixelate Pixelate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAHbkGimmick_ARProjectorHologram Hologram;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAHbkGimmick_ARProjectorVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAHbkGimmick_ARProjectorSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAHbkGimmick_ARProjectorCollision> Collisions;
    
public:
    AHbkGimmick_ARProjector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartMacaronMiniGame();
    
    UFUNCTION(BlueprintCallable)
    void SetActivateInteract(const bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    void PlayBurstSE();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReturnImpatience(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetPointLockon();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageEnd();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetEyeAngle(float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAHbkGimmick_ARProjectorAnimState GetAnimState() const;
    
};

