#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "HbkKaleStatueBarWidgetComponent.generated.h"

class UHbkKaleStatueBarWidget;
class UWidgetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkKaleStatueBarWidgetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopupDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkKaleStatueBarWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkKaleStatueBarWidget* GaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComp;
    
public:
    UHbkKaleStatueBarWidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHealthGauge(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void OpenGaugeWidget();
    
    UFUNCTION(BlueprintCallable)
    void EndGaugeWidget();
    
    UFUNCTION(BlueprintCallable)
    void CloseGaugeWidget();
    
};

