#pragma once
#include "CoreMinimal.h"
#include "EHbkOptionListItemKeyAssignmentType.h"
#include "HbkOptionListItemBaseWidget.h"
#include "HbkOptionListItemKeyAssignmentWidget.generated.h"

class UHbkButtonWidget;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionListItemKeyAssignmentWidget : public UHbkOptionListItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkOptionListItemKeyAssignmentType KeyAssignmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Grayed;
    
public:
    UHbkOptionListItemKeyAssignmentWidget();

};

