#pragma once
#include "CoreMinimal.h"
#include "HbkItemGetPopupBaseWidget.h"
#include "HbkNoticePopupWidgetInterface.h"
#include "HbkFoundGraffityPopupWidget.generated.h"

class UAkAudioEvent;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkFoundGraffityPopupWidget : public UHbkItemGetPopupBaseWidget, public IHbkNoticePopupWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* MaxPartsCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* NowPartsCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShowSound;
    
public:
    UHbkFoundGraffityPopupWidget();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void OnFinishWidget() override PURE_VIRTUAL(OnFinishWidget,);
    
};

