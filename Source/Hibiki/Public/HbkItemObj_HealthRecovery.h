#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkItemObject.h"
#include "HbkItemObj_HealthRecovery.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_HealthRecovery : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RecoveryAmountTag;
    
    UHbkItemObj_HealthRecovery();

};

