#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkCostumeWidgetModelCameraInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkCostumeWidgetModelCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmLength;
    
    HIBIKI_API FHbkCostumeWidgetModelCameraInfo();
};

