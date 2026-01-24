#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkRhythmSynchroMIDISignalParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRhythmSynchroMIDISignalParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote SignalNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignalNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote ResponseNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResponseNoteCount;
    
    FHbkRhythmSynchroMIDISignalParam();
};

