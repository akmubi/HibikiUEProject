#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MktgDLightSyncParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MktgDLightSyncParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Show;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncValue;
    
    HIBIKI_API FHbkGimmick_MktgDLightSyncParam_t();
};

