#pragma once
#include "CoreMinimal.h"
#include "HbkMultipleToughParam.h"
#include "HbkUserWidget.h"
#include "HbkStunGaugeWidget.generated.h"

class AActor;
class AHbkCharacter;
class UDamageType;
class UHbkStunGaugeManagerWidget;
class UImage;
class UOverlay;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStunGaugeWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Gauge_Yellow_Blur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Gauge_Yellow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* LocationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Star_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Star_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Star_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Star_Bro_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Star_Bro_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Star_Bro_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Star_Bro_Blur_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Star_Bro_Blur_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Star_Bro_Blur_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Tex_YellowGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Tex_YellowGaugeBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Brake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_HealGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Recover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_RecoverMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_RecoverFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_SetGaugeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Activate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Deactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_KorsicaBlast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_EndKorsicaBlast;
    
public:
    UHbkStunGaugeWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ToughDeactive();
    
    UFUNCTION(BlueprintCallable)
    void ToughDamaged(float PreToughValue, float DamagedToughValue);
    
    UFUNCTION(BlueprintCallable)
    void ToughActive();
    
    UFUNCTION(BlueprintCallable)
    void SetKorsicaBlastRepeatAnim();
    
    UFUNCTION(BlueprintCallable)
    void SetHealGlowRepeatAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGaugeRate(float GaugeRate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayAnim_HealGlow(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void MultiToughDeactive(int32 Index, const FHbkMultipleToughParam& ToughParam, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void MultiToughDamaged(int32 Index, AActor* DamageCauser, const UDamageType* InDamageType);
    
    UFUNCTION(BlueprintCallable)
    void MultiToughActive(int32 Index, const FHbkMultipleToughParam& ToughParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(AHbkCharacter* HbkCharacter, UHbkStunGaugeManagerWidget* Owner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Gauge_RecoverMax();
    
    UFUNCTION(BlueprintCallable)
    void Gauge_RecoverFinish();
    
    UFUNCTION(BlueprintCallable)
    void Gauge_Recover();
    
    UFUNCTION(BlueprintCallable)
    void Gauge_KorsicaBlastRepeat(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable)
    void Gauge_Deactivate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Gauge_Damage();
    
    UFUNCTION(BlueprintCallable)
    void Gauge_Brake();
    
public:
    UFUNCTION(BlueprintCallable)
    void Gauge_Activate();
    
};

