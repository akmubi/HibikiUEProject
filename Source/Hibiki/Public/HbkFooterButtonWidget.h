#pragma once
#include "CoreMinimal.h"
#include "ETngKeyButtonMap.h"
#include "HbkUserWidget.h"
#include "HbkFooterButtonWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkFooterButtonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngKeyButtonMap KeyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ButtonGauge;
    
public:
    UHbkFooterButtonWidget();

    UFUNCTION(BlueprintCallable)
    void PopInWidget();
    
    UFUNCTION(BlueprintCallable)
    void OutWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

