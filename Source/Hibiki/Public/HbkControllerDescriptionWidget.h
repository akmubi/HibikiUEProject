#pragma once
#include "CoreMinimal.h"
#include "HbkTaskControllerDescDelegateDelegate.h"
#include "HbkUserWidget.h"
#include "HbkControllerDescriptionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkControllerDescriptionWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskControllerDescDelegate DisplayEnd;
    
    UHbkControllerDescriptionWidget();

};

