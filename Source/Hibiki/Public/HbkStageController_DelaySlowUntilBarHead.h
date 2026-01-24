#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkStageController_DelaySlowUntilBarHead.generated.h"

class AHbkBossStageControllerBase;
class UHbkStageController_DelaySlowUntilBarHead;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkStageController_DelaySlowUntilBarHead : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActionDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionDelegate Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionDelegate JustBefore;
    
    UHbkStageController_DelaySlowUntilBarHead();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEventWhole(int32 NoteCount, bool bIsOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnEvent16th(int32 NoteCount, bool bIsOnBeat);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkStageController_DelaySlowUntilBarHead* DelaySlowUntilBarHead(UObject* WorldContextObject, AHbkBossStageControllerBase* StageController, EHbkNote MinNote, float MinTimeRate, EHbkNote JustBeforeNote, float JustBeforeTimeRate, bool IsBossChangeInvincibleOnDeactivate, bool IsForcePlayerChangeInvincibleDeactivate);
    
};

