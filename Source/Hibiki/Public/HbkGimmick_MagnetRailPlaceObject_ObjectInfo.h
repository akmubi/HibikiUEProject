#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_MagnetRailPlaceObject_ObjectInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailPlaceObject_ObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetTransForm;
    
    HIBIKI_API FHbkGimmick_MagnetRailPlaceObject_ObjectInfo();
};

