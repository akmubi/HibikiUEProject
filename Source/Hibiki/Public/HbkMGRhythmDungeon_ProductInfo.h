#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmDungeon_ProductInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_ProductInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> InfoList;
    
    HIBIKI_API FHbkMGRhythmDungeon_ProductInfo();
};

