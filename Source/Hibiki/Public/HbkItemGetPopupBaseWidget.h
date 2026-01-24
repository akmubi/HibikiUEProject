#pragma once
#include "CoreMinimal.h"
#include "EHbkTakeItemUIType.h"
#include "HbkUserWidget.h"
#include "HbkItemGetPopupBaseWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkItemGetPopupBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeItemUIType TakeItemType;
    
    UHbkItemGetPopupBaseWidget();

    UFUNCTION(BlueprintCallable)
    void OpenWidget();
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
    UFUNCTION(BlueprintCallable)
    void AcceptAction();
    
};

