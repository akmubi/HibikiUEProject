#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkStoreMenuChipsEquipmentChipIconWidget.generated.h"

class UImage;
class UPanelWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuChipsEquipmentChipIconWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> GrayedTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ChipIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* GrayedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Grayed;
    
public:
    UHbkStoreMenuChipsEquipmentChipIconWidget();

};

