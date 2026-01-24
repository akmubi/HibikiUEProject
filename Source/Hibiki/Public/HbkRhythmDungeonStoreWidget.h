#pragma once
#include "CoreMinimal.h"
#include "HbkWindowBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkRhythmDungeonStoreWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkItemObject;
class UHbkRhythmDungeonStatusWidget;
class UHbkRhythmDungeonStoreInformationPanelWidget;
class UHbkRhythmDungeonStoreListWidget;
class UHbkRhythmTowerStoreRandomResultWidget;
class UHbkStoreCommonPurchaseCommandWidget;
class UHbkStoreCommonResourceListWidget;
class UHbkUserWidget;
class UPanelWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkRhythmDungeonStoreWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmDungeonStatusWidget> StatusWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CancelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PurchaseSuccessSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BGMVolumeDownSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BGMVolumeUpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShopDescScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonStoreListWidget* ItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonPurchaseCommandWidget* PurchaseCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonResourceListWidget* ResourceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonStoreInformationPanelWidget* InformationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerStoreRandomResultWidget* RandomResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Resource_PurchaseArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OutAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHbkItemObject>> PurchaseItemClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkRhythmDungeonStatusWidget> StatusWidget;
    
public:
    UHbkRhythmDungeonStoreWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateInformation(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
public:
    UFUNCTION(BlueprintCallable)
    void TestStart();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHoldDownFailedPurchaseCommand(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnHoldDownCompletedPurchaseCommand(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnFinsihedStatusAnimation(const UHbkUserWidget* Sender);
    
};

