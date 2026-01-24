#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "HbkMGRhythmDungeon_MapAssetKindRow.generated.h"

class UHbkLoadLevelInstanceAssetData;

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_MapAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkLoadLevelInstanceAssetData* LevelAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadLevelKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TeleportTag;
    
    HIBIKI_API FHbkMGRhythmDungeon_MapAssetKindRow();
};

