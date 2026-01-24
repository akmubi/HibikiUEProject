#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAnimInstance.h"
#include "HbkEm0730_AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkEm0730_AnimInstance : public UHbkEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsChefType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MontageSlot;
    
public:
    UHbkEm0730_AnimInstance();

};

