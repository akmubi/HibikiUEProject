#pragma once
#include "CoreMinimal.h"
#include "EHbkMIDIEvent.h"
#include "HbkRSCompMIDIInitializeParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRSCompMIDIInitializeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMIDIEvent EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndless;
    
    FHbkRSCompMIDIInitializeParam();
};

