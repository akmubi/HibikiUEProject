#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTutorialHalfCellWidget.generated.h"

class URichTextBlock;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialHalfCellWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TextParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TextParts_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ImgPatBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TxtOnlyBase;
    
public:
    UHbkTutorialHalfCellWidget();

};

