#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_DLPhaseCloudParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DLPhaseCloudParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HiddenFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxOpacity;
    
    HIBIKI_API FHbkGimmick_DLPhaseCloudParam();
};

