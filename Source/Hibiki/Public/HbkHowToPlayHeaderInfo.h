#pragma once
#include "CoreMinimal.h"
#include "HbkHowToPlayHeaderInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkHowToPlayHeaderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    HIBIKI_API FHbkHowToPlayHeaderInfo();
};

