#pragma once
#include "CoreMinimal.h"
#include "EHbkHowToPlayCategory.h"
#include "HbkHowToPlayHeaderInfo.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkHowtoPlayDisplayWidget.generated.h"

class UHbkHowtoPlayItemBaseWidget;
class UHbkHowtoPlayItemCellWidget;
class UHbkHowtoPlayItemHeaderWidget;
class UHbkListControlWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkHowtoPlayDisplayWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkHowtoPlayItemHeaderWidget> HeaderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkHowtoPlayItemCellWidget> CellClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkHowToPlayCategory, FHbkHowToPlayHeaderInfo> HeaderTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListViewArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkHowtoPlayItemBaseWidget* SelectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkHowtoPlayItemBaseWidget> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkHowtoPlayDisplayWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OpenCloseAnimEnd();
    
};

