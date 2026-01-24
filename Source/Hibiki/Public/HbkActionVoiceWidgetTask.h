#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTalkDataRow.h"
#include "HbkActionVoiceWidgetTask.generated.h"

class UHbkActionVoiceWidgetTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkActionVoiceWidgetTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UHbkActionVoiceWidgetTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkActionVoiceWidgetTask* ShowActionVoiceWidget(UObject* WorldContextObject, const FHbkTalkDataRow InTalkLine, const FName InRowID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearActionVoiceWidget(UObject* WorldContextObject, const FName ID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AllClearActionVoiceWidget(UObject* WorldContextObject);
    
};

