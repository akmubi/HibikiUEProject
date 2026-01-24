#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HbkListControlWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkListControlWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> SelectableItemList;
    
public:
    UHbkListControlWidget();

};

