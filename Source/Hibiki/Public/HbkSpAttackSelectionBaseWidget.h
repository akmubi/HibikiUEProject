#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkUserWidget.h"
#include "HbkSpAttackSelectionBaseWidget.generated.h"

class UHbkSpAttackSelectionSlotWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSpAttackSelectionBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkSpAttackSelectionSlotWidget*> SlotWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> SlotChangeAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> SlotChangeFadeInAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotRenderOpacity;
    
public:
    UHbkSpAttackSelectionBaseWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSpAttackData(int32 SlotIndex, const TArray<FGameplayTag>& SpAttackTagList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init_Blueprint();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSlot(int32 SlotIndex, const FGameplayTag& SpAttackTag);
    
};

