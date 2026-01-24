#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickMeshKitFlagas.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickMeshKitFlagas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeactivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultToDeactivate;
    
    HIBIKI_API FHbkGimmickMeshKitFlagas();
};

