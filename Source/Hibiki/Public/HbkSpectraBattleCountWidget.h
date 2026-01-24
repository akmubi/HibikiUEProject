#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkSpectraBattleCountWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSpectraBattleCountWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CountTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MaxTextBlock;
    
public:
    UHbkSpectraBattleCountWidget();

};

