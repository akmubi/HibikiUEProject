#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "HbkUserWidget.h"
#include "HbkStageSelectBarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStageSelectBarWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StageNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CellImageBrush;
    
public:
    UHbkStageSelectBarWidget();

};

