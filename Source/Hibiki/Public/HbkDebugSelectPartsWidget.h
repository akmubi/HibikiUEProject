#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkUserWidget.h"
#include "HbkDebugSelectPartsWidget.generated.h"

class UHbkDebugSelectWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkDebugSelectPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkDebugSelectWidget> OwnerPtr;
    
public:
    UHbkDebugSelectPartsWidget();

    UFUNCTION(BlueprintCallable)
    void SetOwnerSelectDebugWidget(UHbkDebugSelectWidget* Owner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InputAngleNotify(int32 Page, float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_Selecting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_NotSelecting();
    
};

