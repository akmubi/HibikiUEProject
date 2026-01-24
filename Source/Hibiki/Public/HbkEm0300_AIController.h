#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Em0300_LauncherParam.h"
#include "HbkEnemyAIController.h"
#include "HbkEm0300_AIController.generated.h"

class AHbkEm0310_GatlingPoint;

UCLASS(Blueprintable)
class AHbkEm0300_AIController : public AHbkEnemyAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm0300_LauncherParam LauncherParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkEm0310_GatlingPoint* GatlingPointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkEm0310_GatlingPoint* PreGatlingPointActor;
    
public:
    AHbkEm0300_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FVector GetLauncherTargetLocation();
    
};

