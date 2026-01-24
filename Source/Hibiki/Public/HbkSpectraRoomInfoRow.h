#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkSpectraRoomInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkSpectraRoomInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpectraRoomNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpectraRoomKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SpectraRoomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpectraGameSequenceName;
    
    HIBIKI_API FHbkSpectraRoomInfoRow();
};

