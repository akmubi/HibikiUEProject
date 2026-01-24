#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerEventAnimFolder.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkPlayerEventAnimFolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Sphere808_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Cat808_Animation;
    
    HIBIKI_API FHbkPlayerEventAnimFolder();
};

