#pragma once
#include "CoreMinimal.h"
#include "ActorActivateInterface.h"
#include "HbkDecalActor.h"
#include "HbkGraffitiCollectCameraSettings.h"
#include "HbkTalkContext.h"
#include "Templates/SubclassOf.h"
#include "HbkGraffitiCollect.generated.h"

class UHbkCameraComponent;
class UHbkGraffitiCollectSettingsDataAsset;
class UTngUserWidget;

UCLASS(Blueprintable)
class AHbkGraffitiCollect : public AHbkDecalActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkGraffitiCollectSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingsDataTableRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGraffitiCollectCameraSettings InCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGraffitiCollectCameraSettings OutCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngUserWidget> BackButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCameraComponent* CameraComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTngUserWidget* BackButtonWidget;
    
public:
    AHbkGraffitiCollect(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTalkEnded(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void OnInputCancel();
    

    // Fix for true pure virtual functions not being implemented
};

