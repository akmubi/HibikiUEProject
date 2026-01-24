#pragma once
#include "CoreMinimal.h"
#include "EHbkMIDINoteType.h"
#include "HbkGimmick_LaserTrapMidiInfoParam_t.h"
#include "HbkGimmick_LaserTrapMidiInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_LaserTrapMidiInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionMaxCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMIDINoteType MIDINoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MidiSubNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_LaserTrapMidiInfoParam_t> ParamArray;
    
    HIBIKI_API FHbkGimmick_LaserTrapMidiInfo_t();
};

