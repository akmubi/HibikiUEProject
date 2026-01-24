#pragma once
#include "CoreMinimal.h"
#include "HbkTutorialPageBaseWidget.h"
#include "HbkTutorialMovieTypePageWidget.generated.h"

class UHbkSkillMovieWidget;
class UImage;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialMovieTypePageWidget : public UHbkTutorialPageBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkillMovieWidget* MovieParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ImageParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PageNext;
    
public:
    UHbkTutorialMovieTypePageWidget();

};

