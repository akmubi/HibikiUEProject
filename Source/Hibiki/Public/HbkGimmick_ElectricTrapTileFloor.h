#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_ElectricTrapFloorTagInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_ElectricTrapTileFloor.generated.h"

class AHbkGimmick_ElectricTrapFloor;

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapTileFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_ElectricTrapFloor> ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapFloorTagInfo SignAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapFloorTagInfo AttackTag;
    
    HIBIKI_API FHbkGimmick_ElectricTrapTileFloor();
};

