#pragma once
#include "CoreMinimal.h"
#include "HbkBattleGroupNameList.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBattleGroupNameList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> List;
    
    FHbkBattleGroupNameList();
};

