#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "HbkAnimNotify_PlayerRecovery.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_PlayerRecovery : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RecoveryParamTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RecoverySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RecoveryHighlightName;
    
    UHbkAnimNotify_PlayerRecovery();

};

