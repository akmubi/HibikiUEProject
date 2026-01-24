#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmNoteParam.h"
#include "RScoreNoteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRScoreNoteDelegate, int32, NoteIndex, const FHbkRhythmNoteParam&, NoteParam);

