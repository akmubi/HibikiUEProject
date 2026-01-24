#pragma once
#include "CoreMinimal.h"
#include "EHbkInTheDarkSupportingPerformer.h"
#include "HbkInTheDarkProgram.generated.h"

USTRUCT(BlueprintType)
struct FHbkInTheDarkProgram {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkInTheDarkSupportingPerformer SupportingPerformerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupportingPerformerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    HIBIKI_API FHbkInTheDarkProgram();
};

