#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoCharaEmoteInfo.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkPhotoCharaEmoteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EmoteAnim;
    
    HIBIKI_API FHbkPhotoCharaEmoteInfo();
};

