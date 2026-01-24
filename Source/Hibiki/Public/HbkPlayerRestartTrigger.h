#pragma once
#include "CoreMinimal.h"
#include "EHbkRestartEventType.h"
#include "HbkTriggerBox.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerRestartTrigger.generated.h"

class AActor;
class UDamageType;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerRestartTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRestartEventType RestartEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> OverrideRestartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActiveTrigger;
    
public:
    AHbkPlayerRestartTrigger(const FObjectInitializer& ObjectInitializer);

};

