#pragma once
#include "CoreMinimal.h"
#include "HbkVS_StreamingViewerActionInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkVS_StreamingViewerActionInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Coin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExpText;
    
    HIBIKI_API FHbkVS_StreamingViewerActionInfo_t();
};

