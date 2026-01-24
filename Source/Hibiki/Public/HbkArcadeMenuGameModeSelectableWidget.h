#pragma once
#include "CoreMinimal.h"
#include "EHbkArcadeGameModeType.h"
#include "HbkListItemBaseWidget.h"
#include "HbkArcadeMenuGameModeSelectableWidget.generated.h"

class UHbkButtonWidget;
class UImage;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UHbkArcadeMenuGameModeSelectableWidget : public UHbkListItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* TabFrontImage_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* TabFrontImage_Unselect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TabTitleBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkArcadeGameModeType CurrentModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UnselectTabImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SelectTabImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabTitleText;
    
public:
    UHbkArcadeMenuGameModeSelectableWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

