#pragma once
#include "CoreMinimal.h"
#include "HbkDamageParam.h"
#include "HbkDamageRepParam.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkDamageRepParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DamageAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDamageParam DamageParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetCounter;
    
    FHbkDamageRepParam();
};

