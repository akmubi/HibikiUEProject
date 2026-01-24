#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EHbkVS_StreamingViewer_BeatHitSuccess_t.h"
#include "EHbkVS_StreamingViewer_ShopMenu_t.h"
#include "EHbkVS_StreamingViewer_UnderMenu_t.h"
#include "HbkVS_StreamingViewerSucWidget.generated.h"

class UBorder;
class UCanvasPanel;
class UImage;
class UScaleBox;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkVS_StreamingViewerSucWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UHbkVS_StreamingViewerSucWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleBeatHitTextImage(EHbkVS_StreamingViewer_BeatHitSuccess_t kind, ESlateVisibility visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleBeatHitMarkImage(ESlateVisibility visible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStateSelectUnderMenu(EHbkVS_StreamingViewer_UnderMenu_t menu, const int32 State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStateSelectShopMenu(EHbkVS_StreamingViewer_ShopMenu_t menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetUseIcon_Animation(EHbkVS_StreamingViewer_UnderMenu_t menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBorder* GetUnderMenuUseSelectBorder(EHbkVS_StreamingViewer_UnderMenu_t menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UScaleBox* GetUnderMenuIconScaleBox(EHbkVS_StreamingViewer_UnderMenu_t menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetUnderMenuCoinText(EHbkVS_StreamingViewer_UnderMenu_t menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetUnderMenuButtonCircle(EHbkVS_StreamingViewer_UnderMenu_t menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetSpawnSpEnemyText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetSpawnEnemyText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCanvasPanel* GetShopMenuCanvas();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetSelectUnderMenuExpText(EHbkVS_StreamingViewer_UnderMenu_t menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetSelectUnderMenuCoinText(EHbkVS_StreamingViewer_UnderMenu_t menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetSelectText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetPlayerHealHpText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetPlayerDefenceUpText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetPlayerAttackUpText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetNeedCoinText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCanvasPanel* GetNeedCoinCanvas();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetHaveCoinText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetEnemyDefenceUpText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetEnemyAttackUpText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetCoolMessageText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetBeatHit_PerfectAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetBeatHit_NewPerfectAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetBeatHit_MissAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetBeatHit_GoodAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetBeatHit_Animation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetBadMessageText();
    
};

