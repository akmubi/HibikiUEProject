#pragma once
#include "CoreMinimal.h"
#include "EHbkMIDIEvent.generated.h"

UENUM(BlueprintType)
enum class EHbkMIDIEvent : uint8 {
    None,
    MIDI_NoteOn,
    MIDI_NoteOff,
};

