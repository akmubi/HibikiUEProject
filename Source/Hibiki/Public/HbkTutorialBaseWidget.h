#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialTypeName.h"
#include "HbkTaskNewTutorialDelegateDelegate.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkTutorialBaseWidget.generated.h"

class UHbkTutorialButtonTypePageWidget;
class UHbkTutorialImageTypePageWidget;
class UHbkTutorialMovieTypePageWidget;
class UHorizontalBox;
class UScaleBox;
class USizeBox;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiddleSize_TalkYPos_Offset;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskNewTutorialDelegate OnNextHierarchy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskNewTutorialDelegate OnBackHierarchy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BtnBase_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BtnBase_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ImgTutorialArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* MovieTutorialArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* MiddleSizeBasePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialButtonTypePageWidget> BtnPageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialImageTypePageWidget> MiddleImgPageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialMovieTypePageWidget> MoviePageClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTutorialTypeName TutorialType;
    
public:
    UHbkTutorialBaseWidget();

    UFUNCTION(BlueprintCallable)
    void RestartPage(bool isCurrentPage);
    
    UFUNCTION(BlueprintCallable)
    void NowPageStartTalk();
    
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
    UFUNCTION(BlueprintCallable)
    void NextHierarchy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init_BP();
    
    UFUNCTION(BlueprintCallable)
    void BackPage();
    
    UFUNCTION(BlueprintCallable)
    void BackHierarchy();
    
};

