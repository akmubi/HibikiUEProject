#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkGetGearWidget.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkGetGearWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NotRenderAnimRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CountUpAnimRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CountFinAnimRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CountStartAnimRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddGearNum;
    
public:
    UHbkGetGearWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnBindAddAddMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetParts();
    
    UFUNCTION(BlueprintCallable)
    void SetWhiteLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTotalGearNum(int32 TotalNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnims();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAddGearNum(int32 AddNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegistIncGear();
    
    UFUNCTION(BlueprintCallable)
    void InitAnim();
    
    UFUNCTION(BlueprintCallable)
    void IncrementGear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetWhiteLevelImg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetTotalBGImg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetPlusIconImg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetGearIconImg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetAddBGShippoImg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetAddBGRightImg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetAddBGLeftImg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetAddBGCenterImg();
    
    UFUNCTION(BlueprintCallable)
    void CountEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearIncGear();
    
    UFUNCTION(BlueprintCallable)
    void AddMoney(int32 ChangeMoney, int32 TotalMoney);
    
};

