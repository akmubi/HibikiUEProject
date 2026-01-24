#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkSpectraRoomController.generated.h"

class UHbkGameAgentComponent;
class UHbkSpectraBattleController;
class UHbkSpectraRoomSettingsDataAsset;
class UObject;

UCLASS(Blueprintable)
class AHbkSpectraRoomController : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateRoomClearStateDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkSpectraRoomSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkSpectraBattleController* SpectraBattleController;
    
public:
    AHbkSpectraRoomController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpectraRoomLookEnding(UObject* WorldContextObject);
    
};

