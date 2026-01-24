#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_PhysicsObjDitherInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_PhysicsObjDitherInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ditherMatName;
    
    HIBIKI_API FHbkGimmick_PhysicsObjDitherInfo_t();
};

