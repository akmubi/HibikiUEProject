#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTrainingRoom_SettingValueWidget.generated.h"

class UButton;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTrainingRoom_SettingValueWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LeftArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RightArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* RightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* LeftButton;
    
public:
    UHbkTrainingRoom_SettingValueWidget();

};

