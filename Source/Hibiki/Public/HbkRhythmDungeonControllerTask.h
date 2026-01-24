#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkRhythmDungeonContollerDelegateDelegate.h"
#include "HbkRhythmDungeonControllerTask.generated.h"

class UHbkRhythmDungeonController;
class UHbkRhythmDungeonControllerTask;
class UObject;

UCLASS(Blueprintable)
class UHbkRhythmDungeonControllerTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnCreate;
    
    UHbkRhythmDungeonControllerTask();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCreatedController(UHbkRhythmDungeonController* pRhythmDungeonController);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkRhythmDungeonControllerTask* CreateRhythmDungeonController(UObject* WorldContextObject);
    
};

