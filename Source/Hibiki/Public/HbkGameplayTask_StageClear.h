#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "Templates/SubclassOf.h"
#include "HbkGameplayTask_StageClear.generated.h"

class UHbkClearWidget;
class UHbkGameplayTask_StageClear;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_StageClear : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskStageClearDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskStageClearDelegate AllEnded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkClearWidget* ClearWidget;
    
public:
    UHbkGameplayTask_StageClear();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_StageClear* StageClearAndLevelMove(UObject* WorldContextObject, TSubclassOf<UHbkClearWidget> ClearWidgetClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_StageClear* StageClear(UObject* WorldContextObject, FName SaveSpotName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_ResultShowClear();
    
    UFUNCTION(BlueprintCallable)
    void Receive_ResultEnded();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_StageClear* LevelMoveAfterStageClear(UObject* WorldContextObject);
    
};

