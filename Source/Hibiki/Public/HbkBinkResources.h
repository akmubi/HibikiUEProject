#pragma once
#include "CoreMinimal.h"
#include "HbkBinkResources.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;

USTRUCT(BlueprintType)
struct FHbkBinkResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* BinkTexture;
    
    HIBIKI_API FHbkBinkResources();
};

