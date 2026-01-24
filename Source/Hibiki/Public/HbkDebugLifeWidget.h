#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkDebugLifeWidget.generated.h"

class AHbkPlayerController;
class UOverlay;
class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class UHbkDebugLifeWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar;
    
public:
    UHbkDebugLifeWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_LifeText(float Current, float Max);
    
};

