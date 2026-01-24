#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkModelViewerModelDrawWidget.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UHbkModelViewerModelDrawWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListPageCanvasClipTranslationX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListPageModelImageTranslationX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewPageModelImageTranslationX;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Clip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ModelImage;
    
public:
    UHbkModelViewerModelDrawWidget();

};

