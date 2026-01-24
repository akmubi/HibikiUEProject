#pragma once
#include "CoreMinimal.h"
#include "HbkHowToPlayDetailInfo.h"
#include "HbkHowtoPlayItemBaseWidget.h"
#include "HbkHowtoPlayItemHeaderWidget.generated.h"

class URichTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkHowtoPlayItemHeaderWidget : public UHbkHowtoPlayItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SelectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* UnSelectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ItemArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHowToPlayDetailInfo HeaderDetailInfo;
    
public:
    UHbkHowtoPlayItemHeaderWidget();

};

