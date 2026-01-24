#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkUserWidget.h"
#include "HbkSpAttackCutInWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSpAttackCutInWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FCutInNoticeDelegate);
    
    UHbkSpAttackCutInWidget();

    UFUNCTION(BlueprintCallable)
    void OnStartFromGameplayTag(FGameplayTag GameplayTag, float PlayRate, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void OnEndAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStart(FGameplayTag GameplayTag, float PlayRate, UTexture2D* Texture);
    
};

