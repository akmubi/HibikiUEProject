#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "HbkItemGetPopupBaseWidget.h"
#include "HbkNoticePopupWidgetInterface.h"
#include "HbkNormalItemGetPopupWidget.generated.h"

class UHbkInventoryObject;
class UTexture2D;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkNormalItemGetPopupWidget : public UHbkItemGetPopupBaseWidget, public IHbkNoticePopupWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UTexture2D*> IconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* TextArea;
    
public:
    UHbkNormalItemGetPopupWidget();

    UFUNCTION(BlueprintCallable)
    void SetInventoryData(const UHbkInventoryObject* InvData);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void OnFinishWidget() override PURE_VIRTUAL(OnFinishWidget,);
    
};

