#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "HbkArcadeMenuController.generated.h"

class UAkAudioEvent;
class UHbkArcadeMenuParentWidget;

UCLASS(Blueprintable)
class UHbkArcadeMenuController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkArcadeMenuParentWidget> ArcadeMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenMenuState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseMenuState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkArcadeMenuParentWidget* ArcadeMenuWidget;
    
public:
    UHbkArcadeMenuController();

private:
    UFUNCTION(BlueprintCallable)
    void OnEndedWidget(UHbkArcadeMenuParentWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

