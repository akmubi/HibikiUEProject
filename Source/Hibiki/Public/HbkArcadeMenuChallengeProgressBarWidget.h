#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkArcadeMenuChallengeProgressBarWidget.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkArcadeMenuChallengeProgressBarWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ProgressNumText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ProgressMaxText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ValueAnim;
    
public:
    UHbkArcadeMenuChallengeProgressBarWidget();

};

