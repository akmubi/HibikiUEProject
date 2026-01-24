#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "HbkTaskComboListDelegateDelegate.h"
#include "HbkUserWidget.h"
#include "HbkComboListWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkComboItemDisplayWidget;
class UHbkSkillMovieWidget;
class UHorizontalBox;
class UImage;
class UOverlay;
class URichTextBlock;
class UScrollBox;
class USizeBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkComboListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskComboListDelegate DisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkComboItemDisplayWidget* SkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SkillDescBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkillMovieWidget* MovieParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkillMovieWidget* LargeMovieParts;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PartnerNameBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* CoDescParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* SkillInfoAppendTextParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SPKeyDescParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SPCostParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SPEnoughReverbParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SPAttackCostArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SkillDescTextParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* SkillDescArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, FText> PartnerNameTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReverbGaugeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseSound;
    
public:
    UHbkComboListWidget();

    UFUNCTION(BlueprintCallable)
    void StartList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPartnerName(EHbkPartnerType PartnerType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectedisHeader(bool isHeader);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySE_OpenLargeMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySE_CloseLargeMovie();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHoveredItem(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedHeaderItem(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void EndList();
    
};

