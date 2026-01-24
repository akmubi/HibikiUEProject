#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "HbkUserWidget.h"
#include "HbkAzitoStageSelectBarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAzitoStageSelectBarWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StageNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CellImageBrush;
    
public:
    UHbkAzitoStageSelectBarWidget();

};

