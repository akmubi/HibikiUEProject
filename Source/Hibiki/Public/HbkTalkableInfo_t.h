#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkableType.h"
#include "HbkTalkableTalkData_t.h"
#include "HbkTalkableInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkTalkableInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkableType TalkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTalkableTalkData_t> TalkDataArray;
    
    HIBIKI_API FHbkTalkableInfo_t();
};

