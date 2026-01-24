#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTalkSubtitleWidget.generated.h"

class UDataTable;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTalkSubtitleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkTalkSubtitleWidget();

    UFUNCTION(BlueprintCallable)
    void SetTalkTextStyle(URichTextBlock* RichText, const UDataTable* TextStyleSet, const FName TextStyleName);
    
};

