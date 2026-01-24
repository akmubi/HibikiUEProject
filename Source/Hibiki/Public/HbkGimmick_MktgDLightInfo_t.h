#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkGimmick_MktgDLightSyncParam_t.h"
#include "HbkGimmick_MktgDLightInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MktgDLightInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote SyncNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncLoopBarCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_MktgDLightSyncParam_t> SyncParamArray;
    
    HIBIKI_API FHbkGimmick_MktgDLightInfo_t();
};

