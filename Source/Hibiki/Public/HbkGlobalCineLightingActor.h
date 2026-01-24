#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkGlobalCineLightingActor.generated.h"

class UHbkGlobalCharaLightingComponent;

UCLASS(Blueprintable)
class AHbkGlobalCineLightingActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, meta=(AllowPrivateAccess=true))
    UHbkGlobalCharaLightingComponent* HbkGlobalCharaLightingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName LabelForSequencer;
    
public:
    AHbkGlobalCineLightingActor(const FObjectInitializer& ObjectInitializer);

};

