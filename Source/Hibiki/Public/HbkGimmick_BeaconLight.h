#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_BeaconLightSaveType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_BeaconMaterialInfo_t.h"
#include "HbkGimmick_BeaconRotationInfo_t.h"
#include "HbkGimmick_BeaconLight.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_BeaconLight : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_BeaconLightSaveType bSaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BeaconMaterialInfo_t matInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BeaconRotationInfo_t beaconLightInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BeaconRotationInfo_t vfxLightInfo;
    
public:
    AHbkGimmick_BeaconLight(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_Event(int32 NoteCount, bool bDownBeat);
    
};

