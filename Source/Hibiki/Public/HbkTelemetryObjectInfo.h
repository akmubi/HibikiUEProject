#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkTelemetryObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkTelemetryObjectInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TelemetryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Memo;
    
    HIBIKI_API FHbkTelemetryObjectInfo();
};

