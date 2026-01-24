#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidget.h"
#include "HbkListItemInterface.h"
#include "HbkTaskHowtoPlayListDelegateDelegate.h"
#include "HbkHowtoPlayItemBaseWidget.generated.h"

class UHbkHowtoPlayListWidget;
class UImage;
class UOverlay;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkHowtoPlayItemBaseWidget : public UHbkButtonBaseWidget, public IHbkListItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskHowtoPlayListDelegate OnOpenCloseAnimEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CloseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UnSelectAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NewMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* NewMark_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkHowtoPlayListWidget* OwnerWidget;
    
public:
    UHbkHowtoPlayItemBaseWidget();

    UFUNCTION(BlueprintCallable)
    void OpenCloseAnimEnd();
    

    // Fix for true pure virtual functions not being implemented
};

