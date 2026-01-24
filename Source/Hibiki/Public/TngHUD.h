#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EDrawWidgetType.h"
#include "Templates/SubclassOf.h"
#include "TngWidgetList.h"
#include "TngHUD.generated.h"

class APlayerController;
class UTngUserWidget;
class UWidget;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ATngHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* FocusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* LayerWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTngUserWidget>> DefaultTngUserWidgets;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UTngUserWidget>> LayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTngUserWidget>, FTngWidgetList> AgentList;
    
public:
    ATngHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetDrawWidgetType(APlayerController* PlayerController, EDrawWidgetType ChangeDrawType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDrawWidgetType GetDrawWidgetType(APlayerController* PlayerController);
    
};

