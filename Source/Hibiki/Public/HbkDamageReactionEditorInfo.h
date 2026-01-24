#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkDamageReactionEditorInfo.generated.h"

class UDataTable;
class UHbkEnemyDamageReaction;

UCLASS(Blueprintable)
class HIBIKI_API UHbkDamageReactionEditorInfo : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ReactionRowKeyTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHbkEnemyDamageReaction*> DamageReactionAssetList;
    
    UHbkDamageReactionEditorInfo();

};

