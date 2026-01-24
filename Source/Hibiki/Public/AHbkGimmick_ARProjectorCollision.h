#pragma once
#include "CoreMinimal.h"
#include "AHbkGimmick_ARProjectorCollision.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FAHbkGimmick_ARProjectorCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PrimitiveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    HIBIKI_API FAHbkGimmick_ARProjectorCollision();
};

