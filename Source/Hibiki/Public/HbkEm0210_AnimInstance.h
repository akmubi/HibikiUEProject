#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAnimInstance.h"
#include "HbkEm0210_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHbkEm0210_AnimInstance : public UHbkEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameAimYaw;
    
public:
    UHbkEm0210_AnimInstance();

};

