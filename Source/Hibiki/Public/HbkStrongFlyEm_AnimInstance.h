#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAnimInstance.h"
#include "HbkStrongFlyEm_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHbkStrongFlyEm_AnimInstance : public UHbkEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveBlendSpaceFowardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveBlendSpaceHorizontalValue;
    
public:
    UHbkStrongFlyEm_AnimInstance();

};

