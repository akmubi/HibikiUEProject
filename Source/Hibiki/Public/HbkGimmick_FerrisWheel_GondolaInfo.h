#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_FerrisWheel_GondolaInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_FerrisWheel_GondolaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
    HIBIKI_API FHbkGimmick_FerrisWheel_GondolaInfo();
};

