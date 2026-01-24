#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkKaleBitState.h"
#include "HbkCharacterAnimInstance.h"
#include "HbkEm7500_BitBaseAnim.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHbkEm7500_BitBaseAnim : public UHbkCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HeadRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkKaleBitState BitState;
    
public:
    UHbkEm7500_BitBaseAnim();

};

