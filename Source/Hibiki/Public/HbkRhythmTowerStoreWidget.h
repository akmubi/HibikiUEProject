#pragma once
#include "CoreMinimal.h"
#include "HbkWindowBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkRhythmTowerStoreWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkItemObject;
class UHbkRhythmTowerRestTimeWidget;
class UHbkRhythmTowerStoreInformationPanelWidget;
class UHbkRhythmTowerStoreRandomResultWidget;
class UHbkStoreCommonListWidget;
class UHbkStoreCommonPurchaseCommandWidget;
class UHbkStoreCommonResourceListWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmTowerStoreWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CancelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PurchaseSuccessSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonListWidget* ItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonPurchaseCommandWidget* PurchaseCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonResourceListWidget* ResourceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerStoreInformationPanelWidget* InformationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerStoreRandomResultWidget* RandomResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerRestTimeWidget* RestTimeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHbkItemObject>> PurchaseItemClassList;
    
public:
    UHbkRhythmTowerStoreWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateInformation(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void OnHoldDownFailedPurchaseCommand(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnHoldDownCompletedPurchaseCommand(const UHbkButtonBaseWidget* Sender);
    
};

