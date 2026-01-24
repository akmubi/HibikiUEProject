#pragma once
#include "CoreMinimal.h"
#include "HbkHowToPlayDetailInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHbkHowToPlayDetailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* HowToPlayImage;
    
    HIBIKI_API FHbkHowToPlayDetailInfo();
};

