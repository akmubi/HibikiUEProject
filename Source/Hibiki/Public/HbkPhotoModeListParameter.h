#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModeListParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModeListParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StringIdArray;
    
    HIBIKI_API FHbkPhotoModeListParameter();
};

