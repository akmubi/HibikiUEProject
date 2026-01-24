#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Templates/SubclassOf.h"
#include "HbkVS_StreamingViewerHUD.generated.h"

class UHbkDebugWidget;
class UHbkVS_StreamingViewerStateWidget;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API AHbkVS_StreamingViewerHUD : public AHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkVS_StreamingViewerStateWidget> StateUWClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkDebugWidget> DebugUWClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DebugRSSUWClass;
    
public:
    AHbkVS_StreamingViewerHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkVS_StreamingViewerStateWidget* GetStateWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkDebugWidget* GetDebugWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetDebugRSSWidget();
    
};

