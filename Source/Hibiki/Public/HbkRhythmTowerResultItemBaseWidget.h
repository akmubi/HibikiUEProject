#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "EHbkRhythmTowerResultItemType.h"
#include "HbkUserWidget.h"
#include "HbkRhythmTowerResultItemBaseWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmTowerResultItemBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRhythmTowerResultItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishShowAnimationDelegate;
    
public:
    UHbkRhythmTowerResultItemBaseWidget();

};

