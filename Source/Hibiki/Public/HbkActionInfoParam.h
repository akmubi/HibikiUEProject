#pragma once
#include "CoreMinimal.h"
#include "HbkActionInfoParam.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkActionInfoParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> AnimList;
    
    FHbkActionInfoParam();
};

