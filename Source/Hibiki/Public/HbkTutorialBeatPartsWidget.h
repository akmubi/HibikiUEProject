#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialButtonTiming.h"
#include "HbkUserWidget.h"
#include "HbkTutorialBeatPartsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialBeatPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBaseLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsButtonPos;
    
public:
    UHbkTutorialBeatPartsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnThroughBeat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetResult(EHbkTutorialButtonTiming ResultType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnResetBeat();
    
};

