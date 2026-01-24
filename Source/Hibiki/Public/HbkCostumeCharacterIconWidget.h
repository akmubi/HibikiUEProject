#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "HbkCostumeSelectableBaseWidget.h"
#include "HbkCostumeCharacterIconWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCostumeCharacterIconWidget : public UHbkCostumeSelectableBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NewIconAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HiddenNewIconAnim;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType CharaType;
    
    UHbkCostumeCharacterIconWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectTab();
    
};

