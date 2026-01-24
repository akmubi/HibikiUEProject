#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SpectraBattleRoomExitDoorMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FHbkGimmick_SpectraBattleRoomExitDoorMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpectraRoomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    HIBIKI_API FHbkGimmick_SpectraBattleRoomExitDoorMaterial();
};

