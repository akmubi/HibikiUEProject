#pragma once
#include "CoreMinimal.h"
#include "HbkEmAssistAttackDiffcultyParams.generated.h"

USTRUCT(BlueprintType)
struct FHbkEmAssistAttackDiffcultyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShiftCount;
    
    HIBIKI_API FHbkEmAssistAttackDiffcultyParams();
};

