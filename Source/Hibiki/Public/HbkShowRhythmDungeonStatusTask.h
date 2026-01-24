#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "OnEndRhythmDungeonStatusTaskDelegateDelegate.h"
#include "HbkShowRhythmDungeonStatusTask.generated.h"

class UHbkRhythmDungeonStatusWidget;
class UHbkShowRhythmDungeonStatusTask;
class UObject;

UCLASS(Blueprintable)
class UHbkShowRhythmDungeonStatusTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndRhythmDungeonStatusTaskDelegate OnEndedWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkRhythmDungeonStatusWidget> Widget;
    
public:
    UHbkShowRhythmDungeonStatusTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowRhythmDungeonStatusTask* ShowRhythmDungeonStatus(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseWidget(UHbkRhythmDungeonStatusWidget* Sender);
    
};

