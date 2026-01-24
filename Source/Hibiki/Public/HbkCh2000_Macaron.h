#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkPartnerCharacterBase.h"
#include "HbkCh2000_Macaron.generated.h"

class UAkAudioEvent;
class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API AHbkCh2000_Macaron : public AHbkPartnerCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TimingPunchTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TimingPunchFailedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LuckyHitAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LuckyHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LuckyHitSound;
    
    AHbkCh2000_Macaron(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNextBeatForAction(int32 NoteCount);
    
};

