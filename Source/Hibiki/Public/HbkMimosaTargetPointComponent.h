#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "HbkMimosaTargetPointComponent.generated.h"

class UHbkMimosaLockonWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkMimosaTargetPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkMimosaLockonWidget> LockonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkMimosaLockonWidget> Widget;
    
public:
    UHbkMimosaTargetPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateWidget();
    
};

