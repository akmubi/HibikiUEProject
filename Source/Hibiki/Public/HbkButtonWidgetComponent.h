#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "HbkButtonWidgetComponent.generated.h"

class UHbkButtonWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkButtonWidgetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkButtonWidget> WidgetClass;
    
public:
    UHbkButtonWidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateWidget();
    
};

