#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkResultRankInfo.h"
#include "HbkResultRankRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkResultRankRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpectra;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkResultRankInfo> ResultRank;
    
    HIBIKI_API FHbkResultRankRow();
};

