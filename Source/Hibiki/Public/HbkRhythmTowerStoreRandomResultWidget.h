#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "EHbkRhythmTowerStoreRandomResultRarityType.h"
#include "HbkRhythmTowerStoreRandomResultItemInfo.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkRhythmTowerStoreRandomResultWidget.generated.h"

class UAkAudioEvent;
class UHbkItemObject;
class UHbkRhythmTowerStoreRandomResultItemIconWidget;
class UTexture2D;
class UTngRichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmTowerStoreRandomResultWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SSRItemIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UHbkItemObject>, FHbkRhythmTowerStoreRandomResultItemInfo> ItemInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkRhythmTowerStoreRandomResultRarityType, UAkAudioEvent*> GetItemSoundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopAnimationShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerStoreRandomResultItemIconWidget* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CloseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LoopAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishOpenAnimationDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishCloseAnimationDelegate;
    
public:
    UHbkRhythmTowerStoreRandomResultWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishOpenAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishCloseAnimation();
    
};

