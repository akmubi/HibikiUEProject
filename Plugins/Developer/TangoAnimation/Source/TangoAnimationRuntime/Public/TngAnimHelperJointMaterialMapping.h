#pragma once
#include "CoreMinimal.h"
#include "TngAnimHelperJointMaterialMapping.generated.h"

USTRUCT(BlueprintType)
struct FTngAnimHelperJointMaterialMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ParamTable;
    
    TANGOANIMATIONRUNTIME_API FTngAnimHelperJointMaterialMapping();
};

