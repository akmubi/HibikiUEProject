#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_Magnet_VariableNoteParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_Magnet_VariableNoteParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BarCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PatternKey;
    
    HIBIKI_API FHbkGimmick_Magnet_VariableNoteParam_t();
};

