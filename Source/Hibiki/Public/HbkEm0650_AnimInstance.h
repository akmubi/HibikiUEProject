#pragma once
#include "CoreMinimal.h"
#include "HbkStrongFlyEm_AnimInstance.h"
#include "HbkEm0650_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHbkEm0650_AnimInstance : public UHbkStrongFlyEm_AnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledLaserLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserBlendValue;
    
public:
    UHbkEm0650_AnimInstance();

};

