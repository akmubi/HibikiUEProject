#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkStageController_DelaySlow.generated.h"

class AHbkBossStageControllerBase;
class UHbkStageController_DelaySlow;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkStageController_DelaySlow : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActionDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionDelegate Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionDelegate JustBefore;
    
    UHbkStageController_DelaySlow();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkStageController_DelaySlow* DelaySlow(UObject* WorldContextObject, AHbkBossStageControllerBase* StageController, EHbkNote NoteType, float NoteRate, EHbkNote JustBeforeNote, float JustBeforeTimeRate);
    
};

