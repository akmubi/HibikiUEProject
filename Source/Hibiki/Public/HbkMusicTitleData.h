#pragma once
#include "CoreMinimal.h"
#include "HbkMusicTitleData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHbkMusicTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LicenseMusicTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StreamingMusicTexture;
    
    HIBIKI_API FHbkMusicTitleData();
};

