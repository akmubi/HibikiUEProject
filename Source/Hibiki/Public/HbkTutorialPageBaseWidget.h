#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTutorialPageBaseWidget.generated.h"

class UDataTable;
class UHbkTutorialDataObject;
class URichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialPageBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TitleTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* UnderDescTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isTalking;
    
public:
    UHbkTutorialPageBaseWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTutorialTalk_BP(UDataTable* TalkData, FName StartTalkRow);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTutorialData(UHbkTutorialDataObject* DataObj);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init_BP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseTutorialTalk_BP();
    
};

