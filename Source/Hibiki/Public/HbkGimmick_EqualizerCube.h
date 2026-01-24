#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_EqualizerCubeActivateExtInt.h"
#include "HbkGimmick_EqualizerCubeMesh.h"
#include "HbkGimmick_EqualizerCube.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_EqualizerCube : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_EqualizerCubeMesh Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_EqualizerCubeActivateExtInt> ActivateExtInt;
    
public:
    AHbkGimmick_EqualizerCube(const FObjectInitializer& ObjectInitializer);

};

