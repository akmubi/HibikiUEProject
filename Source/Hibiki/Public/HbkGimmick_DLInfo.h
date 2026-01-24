#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_DLCloud.h"
#include "HbkGimmick_DLLightning.h"
#include "HbkGimmick_DLPhaseInfo.h"
#include "HbkGimmick_DLInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DLInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_DLPhaseInfo> PhaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_DLLightning LightningInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_DLCloud> CloudInfo;
    
    HIBIKI_API FHbkGimmick_DLInfo();
};

