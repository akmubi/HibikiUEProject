#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "TngUserWidgetCallBackDelegate.h"
#include "HbkBattleResultWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBattleResultWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnResultDisplayEnded;
    
    UHbkBattleResultWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void EndResultDisplay();
    
};

