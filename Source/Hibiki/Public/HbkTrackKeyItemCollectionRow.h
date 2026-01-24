#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkTrackItemCollectionFind.h"
#include "HbkTrackItemCollectionVLog.h"
#include "HbkTrackKeyItemCollectionRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkTrackKeyItemCollectionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Note;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTrackItemCollectionFind LifeCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTrackItemCollectionFind Reverb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTrackItemCollectionFind LifeTank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTrackItemCollectionFind Circuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTrackItemCollectionVLog> VLog;
    
    HIBIKI_API FHbkTrackKeyItemCollectionRow();
};

