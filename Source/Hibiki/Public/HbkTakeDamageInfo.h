#pragma once
#include "CoreMinimal.h"
#include "EHbkTakeDamageType.h"
#include "HbkTakeDamageInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkTakeDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeDamageType FromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeDamageType FromEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeDamageType FromPeppermint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeDamageType FromMacaron;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeDamageType FromKorsica;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeDamageType FromOther;
    
    HIBIKI_API FHbkTakeDamageInfo();
};

