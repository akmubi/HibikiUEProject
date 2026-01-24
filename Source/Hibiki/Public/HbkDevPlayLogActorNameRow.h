#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkDevPlayLogActorNameRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkDevPlayLogActorNameRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DispName;
    
    HIBIKI_API FHbkDevPlayLogActorNameRow();
};

