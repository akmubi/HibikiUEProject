#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkLiftCountDownWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkLiftCountDownWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkLiftCountDownWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetTimeLimitValueText_p1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetTimeLimitValueText_p01();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetTimeLimitValueText_10();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetTimeLimitValueText_1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckState(float Time);
    
};

