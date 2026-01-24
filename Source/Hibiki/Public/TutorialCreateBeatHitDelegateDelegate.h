#pragma once
#include "CoreMinimal.h"
#include "HbkTutorialScoreRow.h"
#include "TutorialCreateBeatHitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialCreateBeatHitDelegate, const FHbkTutorialScoreRow&, NoteParam);

