#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkStageSelectMenuScoreDetailBattleItemWidget.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStageSelectMenuScoreDetailBattleItemWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BossBattleDisplayTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSoftObjectPtr<UTexture2D>> RankIconTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RankIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NoDamageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ScoreText;
    
public:
    UHbkStageSelectMenuScoreDetailBattleItemWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishLoadRankIconTexture();
    
};

