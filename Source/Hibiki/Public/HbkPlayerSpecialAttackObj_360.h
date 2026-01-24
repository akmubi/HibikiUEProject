#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkHologramCharaPostActivateGroup.h"
#include "HbkPlayerSpecialAttackObjectBase.h"
#include "HbkPlayerSpecialAttackObj_360.generated.h"

class UAkAudioEvent;
class UAnimSequenceBase;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerSpecialAttackObj_360 : public AHbkPlayerSpecialAttackObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> PlayAnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidDecoyNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VanishDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HologramCharaPostActivateGroupRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HologramCharaPostDeactivateGroupRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramCharaPostActivateGroup HologramCharaPostActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndSE;
    
public:
    AHbkPlayerSpecialAttackObj_360(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGenerateOtherDecoy(const FGameplayTag& SpAttackTag);
    
    UFUNCTION(BlueprintCallable)
    void OnEndDecoy();
    
    UFUNCTION(BlueprintCallable)
    void OnAbortDecoy();
    
};

