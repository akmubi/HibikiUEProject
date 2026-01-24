#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemySelectionData.h"
#include "HbkBPMRushEnemyTypeData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemyTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushEnemySelectionData> SelectionData;
    
    HIBIKI_API FHbkBPMRushEnemyTypeData();
};

