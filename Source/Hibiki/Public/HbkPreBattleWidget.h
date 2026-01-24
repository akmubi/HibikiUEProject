#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkPreBattleWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPreBattleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LetterBox_In_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LetterBox_Out_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* TwoBeatsLess_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ThreeBeatsMore_Scale_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ThreeBeatsMore_Out_Anim;
    
public:
    UHbkPreBattleWidget();

    UFUNCTION(BlueprintCallable)
    void TwoBeatLess();
    
    UFUNCTION(BlueprintCallable)
    void ThreeBeatsMore_Out();
    
    UFUNCTION(BlueprintCallable)
    void ThreeBeatsMore_In();
    
};

