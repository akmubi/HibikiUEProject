#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkVendingMachine_RD_ProductAppearActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkVendingMachine_RD_ProductAppearActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FHbkVendingMachine_RD_ProductAppearActor();
};

