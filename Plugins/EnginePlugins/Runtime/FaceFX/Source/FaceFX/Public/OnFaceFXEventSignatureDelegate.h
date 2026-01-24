#pragma once
#include "CoreMinimal.h"
#include "OnFaceFXEventSignatureDelegate.generated.h"

class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFaceFXEventSignature, USkeletalMeshComponent*, SkelMeshComp, const FName&, AnimId);

