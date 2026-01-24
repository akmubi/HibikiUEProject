#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkSpectraBattleConditionWidget.generated.h"

class UHbkSpectraBattleCountWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSpectraBattleConditionWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MissionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSpectraBattleCountWidget* CountWidget;
    
public:
    UHbkSpectraBattleConditionWidget();

};

