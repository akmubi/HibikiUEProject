#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkSpectraScoreDetailItemWidget.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSpectraScoreDetailItemWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpectraRoomNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSoftObjectPtr<UTexture2D>> RankIconTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RankIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RankNoneIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ScoreNoneIcon;
    
public:
    UHbkSpectraScoreDetailItemWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishLoadRankIconTexture();
    
};

