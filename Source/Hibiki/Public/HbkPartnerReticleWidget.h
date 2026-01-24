#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "HbkUserWidget.h"
#include "HbkPartnerReticleWidget.generated.h"

class UBorder;
class UHbkPartnerTargetPointComponent;
class UImage;
class UOverlay;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPartnerReticleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ImageBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CenterCircle_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CenterRaticle_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PepMainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PepSubColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor MacaMainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor MacaSubColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor KorMainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor KorSubColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PepBorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MacaBorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor KorBorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UnLockTargetLoop_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LockTarget_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UnLockTarget_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EndTarget_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* StartTarget_Anim;
    
public:
    UHbkPartnerReticleWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetPartnerColor(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnUnLock(UHbkPartnerTargetPointComponent* PartnerTargetComp, bool bEndLockOn);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnShowReticle();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnLockon(UHbkPartnerTargetPointComponent* PartnerTargetComp);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnHideReticle(bool bActionSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnlockSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEndTargetSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Bluerint_SetPartnerColor(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetWidgetParts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_RemoveSyncEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_BindSyncEvent();
    
};

