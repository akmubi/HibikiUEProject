#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMGRhythmDungeon_ChallengeAssetKindRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_ChallengeAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ChallengeList;
    
    HIBIKI_API FHbkMGRhythmDungeon_ChallengeAssetKindRow();
};

