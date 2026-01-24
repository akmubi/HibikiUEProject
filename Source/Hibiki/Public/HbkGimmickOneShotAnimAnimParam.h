#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickOneShotAnimAnimParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickOneShotAnimAnimParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartAnimTransitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndAnimTransitName;
    
    HIBIKI_API FHbkGimmickOneShotAnimAnimParam();
};

