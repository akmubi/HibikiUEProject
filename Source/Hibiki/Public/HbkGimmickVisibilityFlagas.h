#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickVisibilityFlagas.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickVisibilityFlagas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeactivateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHiddenInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchCollisionWithVisibility;
    
    HIBIKI_API FHbkGimmickVisibilityFlagas();
};

