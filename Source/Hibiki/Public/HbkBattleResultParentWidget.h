#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "TngUserWidgetCallBackDelegate.h"
#include "HbkBattleResultParentWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBattleResultParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnResultDisplayEnded;
    
    UHbkBattleResultParentWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void EndResultDisplay();
    
};

