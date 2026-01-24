#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkPartnerType.h"
#include "HbkTaskHowtoPlayListDelegateDelegate.h"
#include "HbkUserWidget.h"
#include "HbkHowtoPlayListWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkHowtoPlayDisplayWidget;
class UHbkHowtoPlayItemBaseWidget;
class UHbkSkillMovieWidget;
class UHorizontalBox;
class UImage;
class UOverlay;
class URichTextBlock;
class UScrollBox;
class USizeBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkHowtoPlayListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskHowtoPlayListDelegate OnDisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkHowtoPlayDisplayWidget* ContentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SkillDescBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkillMovieWidget* MovieParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DescriptionImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ComboDescBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PartnerDescBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SPAttackDescBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* PANameParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* PAKeyDescParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* PAConsumeReverbParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* PACostNumParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* CoDescParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SPKeyDescParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SPCostParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SPEnoughReverbParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SkillDescTextParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* SkillDescArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkHowtoPlayItemBaseWidget* BeforeSelectWidget;
    
public:
    UHbkHowtoPlayListWidget();

    UFUNCTION(BlueprintCallable)
    void UnSelectItem(UHbkHowtoPlayItemBaseWidget* BeforeItemWidget);
    
    UFUNCTION(BlueprintCallable)
    void StartList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPartnerName(EHbkPartnerType PartnerType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectItemKeyUp();
    
    UFUNCTION(BlueprintCallable)
    void SelectItemKeyMouseHover();
    
    UFUNCTION(BlueprintCallable)
    void SelectItemKeyDown();
    
    UFUNCTION(BlueprintCallable)
    void SelectItem(UHbkHowtoPlayItemBaseWidget* ItemWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectedisHeader(bool isHeader);
    
    UFUNCTION(BlueprintCallable)
    void OnloadCompleted(FGameplayTag HowToPlayTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHoveredItem(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedHeaderItem(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void EndList();
    
};

