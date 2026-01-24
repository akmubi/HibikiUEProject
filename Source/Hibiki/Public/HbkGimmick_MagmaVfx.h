#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_MagmaVfx.generated.h"

class AActor;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_MagmaVfx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OverlapLargeVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OverlapSmallVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> OverlapLargeClasses;
    
    HIBIKI_API FHbkGimmick_MagmaVfx();
};

