#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkSamuraiHaikuWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSamuraiHaikuWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rare_PickProb;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Haiku_Anim_10;
    
public:
    UHbkSamuraiHaikuWidget();

    UFUNCTION(BlueprintCallable)
    void PlayHaiku();
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
};

