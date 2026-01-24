#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkItemGetPopupBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkPieceGetPopupWidget.generated.h"

class UHbkInventoryObject;
class UHbkItemViewWidget;
class UOverlay;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPieceGetPopupWidget : public UHbkItemGetPopupBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ItemViewBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkItemViewWidget* ItemView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UHbkItemViewWidget>> PieceItemViewWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* TextArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInput;
    
public:
    UHbkPieceGetPopupWidget();

    UFUNCTION(BlueprintCallable)
    void SetInventoryData(const UHbkInventoryObject* InvData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenItemPieceWidget();
    
};

