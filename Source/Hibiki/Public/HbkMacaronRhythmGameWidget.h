#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkUserWidget.h"
#include "HbkMacaronRhythmGameWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMacaronRhythmGameWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinish;
    
public:
    UHbkMacaronRhythmGameWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartRhythmGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySuccessAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetWidgetLocation(FVector2D Location, bool isScreenOut);
    
};

