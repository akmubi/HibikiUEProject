#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_BalloonBuoyancy.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BalloonBuoyancy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Force;
    
    HIBIKI_API FHbkGimmick_BalloonBuoyancy();
};

