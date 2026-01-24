#pragma once
#include "CoreMinimal.h"
#include "HbkBattleActorList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBattleActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> List;
    
    FHbkBattleActorList();
};

