#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SpectraHubRoomExitDoor.generated.h"

class UHbkDialog_SpectraRoom;
class UHbkSpectraRoomSettingsDataAsset;

UCLASS(Blueprintable)
class AHbkGimmick_SpectraHubRoomExitDoor : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkSpectraRoomSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkDialog_SpectraRoom* Dialog;
    
public:
    AHbkGimmick_SpectraHubRoomExitDoor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGotoHideOut();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelReturnToHideOutMenu(int32 ButtonNo);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptReturnToHideOutMenu(int32 ButtonNo);
    
};

