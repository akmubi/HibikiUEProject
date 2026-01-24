#pragma once
#include "CoreMinimal.h"
#include "HbkNp0900_ProgressData.h"
#include "HbkNp0900_JumpConditionData.generated.h"

USTRUCT(BlueprintType)
struct FHbkNp0900_JumpConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0900_ProgressData CheckProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpBehaviorName;
    
    HIBIKI_API FHbkNp0900_JumpConditionData();
};

