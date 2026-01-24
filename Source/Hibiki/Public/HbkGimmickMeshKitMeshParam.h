#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickMeshKitMeshParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickMeshKitMeshParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ShowMeshKitNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HiddenMeshKitNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenAllMeshKitName;
    
    HIBIKI_API FHbkGimmickMeshKitMeshParam();
};

