#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkBossAdjustTakeDamageScaleInfo.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FHbkBossAdjustTakeDamageScaleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToughDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDamageScale;
    
    HIBIKI_API FHbkBossAdjustTakeDamageScaleInfo();
};

