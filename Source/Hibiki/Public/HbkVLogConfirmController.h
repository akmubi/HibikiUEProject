#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "HbkVLogConfirmObjectParam.h"
#include "HbkVLogConfirmTextParam.h"
#include "VLogConfirmControllerLoadCompleteDelegateDelegate.h"
#include "VLogNotifyDelegateDelegate.h"
#include "HbkVLogConfirmController.generated.h"

class UHbkInventoryObject;
class UHbkVLogConfirmBaseWidget;
class UHbkVLogConfirmDataAsset;

UCLASS(Blueprintable)
class AHbkVLogConfirmController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVLogNotifyDelegate OnCloseVLogDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVLogConfirmControllerLoadCompleteDelegate OnloadCompleted;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UHbkInventoryObject>> InventoryFileObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> FileTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkVLogConfirmObjectParam> VLogConfirmParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkVLogConfirmTextParam> VLogTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkVLogConfirmBaseWidget* VLogConfirmWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkVLogConfirmBaseWidget> VLogConfirmWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkVLogConfirmDataAsset* VLogConfirmDataAsset;
    
public:
    AHbkVLogConfirmController(const FObjectInitializer& ObjectInitializer);

};

