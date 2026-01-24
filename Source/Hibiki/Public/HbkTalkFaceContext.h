#pragma once
#include "CoreMinimal.h"
#include "HbkTalkFaceContext.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkFaceContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FaceCurves;
    
    FHbkTalkFaceContext();
};

