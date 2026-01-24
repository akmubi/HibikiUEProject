#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkEm0450AvoidParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm0450AvoidParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> CheckObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidDistPlayerAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidCheckDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConsecutiveAvoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidPAEvasionNoteCount;
    
    HIBIKI_API FHbkEm0450AvoidParam();
};

