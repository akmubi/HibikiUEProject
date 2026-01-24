#pragma once
#include "CoreMinimal.h"
#include "HbkNp0900_ProgressData.generated.h"

USTRUCT(BlueprintType)
struct FHbkNp0900_ProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    HIBIKI_API FHbkNp0900_ProgressData();
};

