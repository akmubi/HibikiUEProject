#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickEmissiveLinkInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickEmissiveLinkInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BaseOnActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BaseOnActivateExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BaseOnDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BaseOnDeactivateExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BaseOnReturnCheckPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SplineMoveEnd;
    
    HIBIKI_API FHbkGimmickEmissiveLinkInfo_t();
};

