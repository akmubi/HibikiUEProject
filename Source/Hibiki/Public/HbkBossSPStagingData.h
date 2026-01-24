#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkBossSPCameraType.h"
#include "EHbkBossSPCancelType.h"
#include "EHbkBossSPCorrectionType.h"
#include "HbkBossSPStagingData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossSPStagingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossSPCameraType CameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossSPCorrectionType CorrectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossSPCancelType CancelType;
    
    HIBIKI_API FHbkBossSPStagingData();
};

