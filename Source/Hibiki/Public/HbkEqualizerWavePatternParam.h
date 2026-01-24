#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkEqualizerWavePatternParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEqualizerWavePatternParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteCountToNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountToNotice;
    
    HIBIKI_API FHbkEqualizerWavePatternParam();
};

