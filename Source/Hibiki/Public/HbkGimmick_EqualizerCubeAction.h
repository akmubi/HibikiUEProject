#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkGimmickCurveType_t.h"
#include "HbkGimmick_EqualizerCubeAction.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_EqualizerCubeAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t RotationCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RotationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationSpeed;
    
    HIBIKI_API FHbkGimmick_EqualizerCubeAction();
};

