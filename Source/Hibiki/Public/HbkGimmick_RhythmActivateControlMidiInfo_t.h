#pragma once
#include "CoreMinimal.h"
#include "EHbkMIDINoteType.h"
#include "HbkGimmick_RhythmActivateControlMidiInfoParam_t.h"
#include "HbkGimmick_RhythmActivateControlMidiInfo_t.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGimmick_RhythmActivateControlMidiInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionMaxCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMIDINoteType MIDINoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MidiSubNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmActivateControlMidiInfoParam_t> ParamArray;
    
    FHbkGimmick_RhythmActivateControlMidiInfo_t();
};

