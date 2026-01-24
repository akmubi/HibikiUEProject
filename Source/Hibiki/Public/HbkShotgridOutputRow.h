#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkShotgridOutputRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkShotgridOutputRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkeletalMesh_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Montage_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Motion_Name;
    
    FHbkShotgridOutputRow();
};

