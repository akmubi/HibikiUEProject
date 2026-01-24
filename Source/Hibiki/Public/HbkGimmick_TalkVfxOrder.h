#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_TalkVfx.h"
#include "HbkGimmick_TalkVfxOrder.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkGimmick_TalkVfxOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnVfxActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_TalkVfx> VfxOrder;
    
    HIBIKI_API FHbkGimmick_TalkVfxOrder();
};

