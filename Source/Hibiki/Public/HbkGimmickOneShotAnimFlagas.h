#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickOneShotAnimFlagas.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickOneShotAnimFlagas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepPlayingStartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepPlayingEndAnim;
    
    HIBIKI_API FHbkGimmickOneShotAnimFlagas();
};

