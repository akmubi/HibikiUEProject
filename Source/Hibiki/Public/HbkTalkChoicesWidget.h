#pragma once
#include "CoreMinimal.h"
#include "HbkTalkChoicesDelegateDecideDelegate.h"
#include "HbkTalkChoicesDelegateResultDelegate.h"
#include "HbkUserWidget.h"
#include "HbkTalkChoicesWidget.generated.h"

class UHbkTalkChoiceItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTalkChoicesWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ItemTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MetaNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> NewMarkFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumChoiceItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurChoiceItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegisterLayerOnShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedChoiceItemReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableWhenPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkTalkChoiceItemWidget*> ChoiceItems;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkChoicesDelegateDecide OnTalkChoicesDecide;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkChoicesDelegateResult OnTalkChoicesEnd;
    
    UHbkTalkChoicesWidget();

    UFUNCTION(BlueprintCallable)
    void Invoke_PushChoiceItem(const FName& InItemName, const FText& InItemText, const FName& InMetaName, bool bNewMarkFlag);
    
    UFUNCTION(BlueprintCallable)
    void Invoke_InputChoiceUp();
    
    UFUNCTION(BlueprintCallable)
    void Invoke_InputChoiceDown();
    
    UFUNCTION(BlueprintCallable)
    void Invoke_InputChoiceDecide();
    
    UFUNCTION(BlueprintCallable)
    void Invoke_InputChoiceCancel();
    
    UFUNCTION(BlueprintCallable)
    void Invoke_EndChoices();
    
    UFUNCTION(BlueprintCallable)
    void Invoke_BeginChoices();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurChoiceFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPushChoiceItem(const FName& InItemName, const FText& InItemText, bool bNewMarkFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInputChoiceUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInputChoiceDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInputChoiceDecideAtID(int32 NewID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInputChoiceDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInputChoiceCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndChoices();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeginChoices();
    
};

