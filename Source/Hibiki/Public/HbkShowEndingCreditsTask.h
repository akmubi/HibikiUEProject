#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkEndingCreditsWidgetOnFinishPlaySceneDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkShowEndingCreditsTask.generated.h"

class UHbkEndingCreditsWidget;
class UHbkShowEndingCreditsTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowEndingCreditsTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEndingCreditsWidgetOnFinishPlayScene OnCloseEndingCredits;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkEndingCreditsWidget> EndingCreditsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkEndingCreditsWidget* EndingCreditsWidget;
    
public:
    UHbkShowEndingCreditsTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowEndingCreditsTask* ShowEndingCredits(UObject* WorldContextObject, TSubclassOf<UHbkEndingCreditsWidget> WidgetClass, float FadeDuration);
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseEndingCredits();
    
};

