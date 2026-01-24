#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkRDbg0730_VendingMachine_ProductAppearActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRDbg0730_VendingMachine_ProductAppearActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FHbkRDbg0730_VendingMachine_ProductAppearActor();
};

