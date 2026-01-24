#pragma once
#include "CoreMinimal.h"
#include "TngAnimHelperJointMaterialMeshMapping.generated.h"

class USkinnedMeshComponent;

USTRUCT(BlueprintType)
struct TANGOANIMATIONRUNTIME_API FTngAnimHelperJointMaterialMeshMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, USkinnedMeshComponent*> MeshComponentTable;
    
    FTngAnimHelperJointMaterialMeshMapping();
};

