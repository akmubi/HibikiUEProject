#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_PartsInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_PartsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SearchTopBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExclusionTopBoneName;
    
    HIBIKI_API FHbkEm6000_PartsInfo();
};

