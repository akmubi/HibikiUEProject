#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialButtonTiming.h"
#include "HbkTutorialScoreRow.h"
#include "HbkUserWidget.h"
#include "HbkTutorialBeatButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialBeatButtonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTutorialScoreRow ButtonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTutorialButtonTiming Result;
    
    UHbkTutorialBeatButtonWidget();

    UFUNCTION(BlueprintCallable)
    void SetInfo(FHbkTutorialScoreRow NewButtonData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnThroughBeat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartBeatHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetResult(EHbkTutorialButtonTiming ResultType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetInfo(FHbkTutorialScoreRow NewButtonData);
    
};

