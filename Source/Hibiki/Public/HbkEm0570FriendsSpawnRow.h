#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "HbkEm0570FriendsSpawnRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm0570FriendsSpawnRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> EnemyTypeIDList;
    
    FHbkEm0570FriendsSpawnRow();
};

