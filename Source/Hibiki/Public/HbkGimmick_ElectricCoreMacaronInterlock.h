#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricCoreMacaronInterlock.generated.h"

class AActor;
class AHbkGimmick_ElectricCoreUpDown;

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricCoreMacaronInterlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_ElectricCoreUpDown* ElectricCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Pipe;
    
    HIBIKI_API FHbkGimmick_ElectricCoreMacaronInterlock();
};

