#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg0150SaveType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0150_MoveAnimInfo_t.h"
#include "HbkGimmick_bg0150_SoundInfo_t.h"
#include "HbkGimmick_bg0150_VFXInfo_t.h"
#include "HbkGimmick_bg0150.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0150 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg0150SaveType bSaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0150_SoundInfo_t soundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0150_VFXInfo_t vfxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0150_MoveAnimInfo_t MoveAnimInfo;
    
public:
    AHbkGimmick_bg0150(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_bg0150(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter_bg0150(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteHalf_bg0150(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote8th_bg0150(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote16th_bg0150(int32 NoteCount, bool bDownBeat);
    
};

