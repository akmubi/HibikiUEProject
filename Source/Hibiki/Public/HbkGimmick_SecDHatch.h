#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "EHbkGimmick_SecDHatchSaveType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SecDHatch_SoundInfo_t.h"
#include "HbkGimmick_SecDHatch.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_SecDHatch : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SecDHatch_SoundInfo_t SoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoReactionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t OpenCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_SecDHatchSaveType bOpenCloseSave;
    
public:
    AHbkGimmick_SecDHatch(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter_SecDHatch(int32 NoteCount, bool bDownBeat);
    
};

