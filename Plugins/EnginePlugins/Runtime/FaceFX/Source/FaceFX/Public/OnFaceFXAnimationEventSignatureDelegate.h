#pragma once
#include "CoreMinimal.h"
#include "OnFaceFXAnimationEventSignatureDelegate.generated.h"

class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnFaceFXAnimationEventSignature, USkeletalMeshComponent*, SkelMeshComp, const FName&, AnimId, int32, ChannelIndex, float, ChannelTime, float, EventTime, const FString&, Payload);

