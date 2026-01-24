#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "HbkKorsicaTimerComponent.generated.h"

class UHbkKorsicaTimerWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkKorsicaTimerComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkKorsicaTimerWidget> WidgetClass;
    
public:
    UHbkKorsicaTimerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimerValue(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateWidget();
    
};

