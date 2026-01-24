#pragma once
#include "CoreMinimal.h"
#include "HbkDialogOnButtonClickDelegate.h"
#include "HbkUserWidget.h"
#include "HbkDialogItemWidget.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkDialogItemWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialogOnButtonClick OnClickDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectAnimation;
    
public:
    UHbkDialogItemWidget();

    UFUNCTION(BlueprintCallable)
    void EndSelect(bool bIsSetPanel);
    
    UFUNCTION(BlueprintCallable)
    void BeginSelect(bool bIsSetPanel);
    
};

