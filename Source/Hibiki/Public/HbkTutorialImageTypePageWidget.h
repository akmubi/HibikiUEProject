#pragma once
#include "CoreMinimal.h"
#include "HbkTutorialPageBaseWidget.h"
#include "HbkTutorialImageTypePageWidget.generated.h"

class UHbkSkillMovieWidget;
class UImage;
class UOverlay;
class URichTextBlock;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialImageTypePageWidget : public UHbkTutorialPageBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ImageParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkillMovieWidget* MovieParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PageNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PageNext_NoImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ImgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* NothingImgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TitleTextBox_NoImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* DescTextBox_NoImg;
    
public:
    UHbkTutorialImageTypePageWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPageNum(int32 PageNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnePage();
    
};

