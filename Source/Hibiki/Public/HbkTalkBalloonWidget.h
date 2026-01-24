#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTalkBalloonWidget.generated.h"

class UDataTable;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTalkBalloonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableWhenPause;
    
    UHbkTalkBalloonWidget();

    UFUNCTION(BlueprintCallable)
    void SetTalkTextStyle(URichTextBlock* RichText, const UDataTable* TextStyleSet, const FName TextStyleName);
    
};

