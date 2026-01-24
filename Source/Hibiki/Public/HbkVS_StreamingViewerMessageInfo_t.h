#pragma once
#include "CoreMinimal.h"
#include "HbkVS_StreamingViewerMessageInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkVS_StreamingViewerMessageInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Coin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTime;
    
    HIBIKI_API FHbkVS_StreamingViewerMessageInfo_t();
};

