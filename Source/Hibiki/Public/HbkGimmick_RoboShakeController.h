#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickRoboShakeRTPCType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_RoboShakeControllerAsset.h"
#include "HbkGimmick_RoboShakeController.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class AHbkGimmick_RoboShakeController : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RoboShakeControllerAsset AssetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmickRoboShakeRTPCType SaveRTPCType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* FootStepComp;
    
public:
    AHbkGimmick_RoboShakeController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_St11ShakeController(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter_St11ShakeController(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteHalf_St11ShakeController(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote8th_St11ShakeController(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote16th_St11ShakeController(int32 NoteCount, bool bDownBeat);
    
};

