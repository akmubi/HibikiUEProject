#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTalkChoiceItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTalkChoiceItemWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UHbkTalkChoiceItemWidget();

};

