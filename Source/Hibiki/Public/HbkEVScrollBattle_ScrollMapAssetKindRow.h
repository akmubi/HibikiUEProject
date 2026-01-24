#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkScrollBattle_ScrollMapKind_t.h"
#include "HbkEVScrollBattle_ScrollMapAssetKindRow.generated.h"

class UHbkLoadLevelInstanceAssetData;

USTRUCT(BlueprintType)
struct FHbkEVScrollBattle_ScrollMapAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool repeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkScrollBattle_ScrollMapKind_t> kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkLoadLevelInstanceAssetData* AssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName loadMapKeyName;
    
    HIBIKI_API FHbkEVScrollBattle_ScrollMapAssetKindRow();
};

