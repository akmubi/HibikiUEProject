#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialButtonTiming.h"
#include "HbkTutorialScoreRow.h"
#include "TutorialInputDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTutorialInputDelegate, const FHbkTutorialScoreRow&, NoteParam, EHbkTutorialButtonTiming, Timing);

