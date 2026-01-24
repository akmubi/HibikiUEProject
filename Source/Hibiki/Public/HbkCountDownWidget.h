#pragma once
#include "CoreMinimal.h"
#include "CountDownEndDelegeteDelegate.h"
#include "HbkUserWidget.h"
#include "HbkCountDownWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCountDownWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountDownEndDelegete OnStartCountDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountDownEndDelegete OnFirstCountDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountDownEndDelegete OnSecondCountDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountDownEndDelegete OnThirdCountDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountDownEndDelegete OnEndCountDown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> CountAnimations;
    
public:
    UHbkCountDownWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void CountStart(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void CountDown(int32 NoteCount, bool bDownBeat);
    
};

