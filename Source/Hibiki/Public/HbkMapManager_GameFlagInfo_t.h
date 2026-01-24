#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMapManager_GameFlagInfo_t.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkMapManager_GameFlagInfo_t : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BitValue;
    
    FHbkMapManager_GameFlagInfo_t();
};

