#pragma once
#include "CoreMinimal.h"
#include "OnFaceFXAudioStartEventSignatureDelegate.generated.h"

class UActorComponent;
class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnFaceFXAudioStartEventSignature, USkeletalMeshComponent*, SkelMeshComp, const FName&, AnimId, bool, IsAudioStarted, UActorComponent*, AudioComponentStartedOn);

