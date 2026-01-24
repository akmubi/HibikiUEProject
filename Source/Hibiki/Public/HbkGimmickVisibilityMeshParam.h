#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickVisibilityMeshParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickVisibilityMeshParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibility;
    
    HIBIKI_API FHbkGimmickVisibilityMeshParam();
};

