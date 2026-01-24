#pragma once
#include "CoreMinimal.h"
#include "HbkActionParam.h"
#include "HbkRDNp0900_JumpEscapeParam.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkRDNp0900_JumpEscapeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* HintRoboJumpEscapeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovePosKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkActionParam JumpActionParam;
    
    HIBIKI_API FHbkRDNp0900_JumpEscapeParam();
};

