#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "TngAnimHelperJointMaterialMapping.h"
#include "TngAnimHelperJointMaterialMeshMapping.h"
#include "TngAnimNode_HelperJoint.generated.h"

class UTngAnimHelperJointData;

USTRUCT(BlueprintType)
struct TANGOANIMATIONRUNTIME_API FTngAnimNode_HelperJoint : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTngAnimHelperJointData* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTngAnimHelperJointMaterialMapping> MaterialTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngAnimHelperJointMaterialMeshMapping MeshCompTable;
    
    FTngAnimNode_HelperJoint();
};

