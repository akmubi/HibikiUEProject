#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkEmotionType.h"
#include "EHbkTalkFaceType.h"
#include "EHbkTalkTextStyle.h"
#include "HbkTalkFaceContext.h"
#include "HbkTalkWidgetDelegateHideDelegate.h"
#include "HbkTalkWidgetDelegateShowDelegate.h"
#include "HbkUserWidget.h"
#include "HbkTalkWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTalkWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkWidgetDelegateShow OnShowFaceIconLF;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkWidgetDelegateHide OnHideFaceIconLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkChoiceResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkChoiceFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegistTalkMan;
    
    UHbkTalkWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkSubtitleCondition(int32 NewCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkSubtitleBGTPCondition(int32 NewCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkSubtitleBGCondition(int32 NewCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkNameCondition(int32 NewCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkFontSize(int32 NewFontSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkContextCondition(int32 NewCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnShowFaceIconLF(EHbkTalkFaceType FaceType, EHbkTalkEmotionType EmotionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetLipSyncState(FHbkTalkFaceContext FaceContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetLipSync(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRefreshTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPushTalkChoiceItem(const FName& ItemLabel, const FText& ItemText, const FName& InMetaName, bool bNewMarkFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPushNewTextLine(const FText& Name, const FText& TextLine, EHbkTalkTextStyle TextStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPushContextLine(const FText& TextLine, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPlayTalkChoices();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInputChoiceUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInputChoiceDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInputChoiceDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnHideFaceIconLF();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnGetChoiceFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndVoice(float AutoCloseTime);
    
};

