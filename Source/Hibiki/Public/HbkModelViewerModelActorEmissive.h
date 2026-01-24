#pragma once
#include "CoreMinimal.h"
#include "HbkModelViewerModelActorEmissive.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FHbkModelViewerModelActorEmissive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmissiveValue;
    
    HIBIKI_API FHbkModelViewerModelActorEmissive();
};

