#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkEm6000_IntermissionController.generated.h"

class AHbkEm6000_IntermissionTaskBase;
class AHbkEm6000_Roquefort;
class AHbkEm6000_StageController;

UCLASS(Blueprintable)
class AHbkEm6000_IntermissionController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_Roquefort> Boss;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkEm6000_IntermissionTaskBase>> Tasks;
    
public:
    AHbkEm6000_IntermissionController(const FObjectInitializer& ObjectInitializer);

};

