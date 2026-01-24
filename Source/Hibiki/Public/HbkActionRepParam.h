#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkActionParam.h"
#include "HbkActionRepParam.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkActionRepParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ActionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkActionParam ActionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetCounter;
    
    FHbkActionRepParam();
};

