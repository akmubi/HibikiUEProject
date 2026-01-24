#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_RhythmActivate_SaveType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_RhythmActivateControlInfo_t.h"
#include "HbkGimmick_RhythmActivateControlMidiInfo_t.h"
#include "HbkGimmick_RhythmActivateControl.generated.h"

class UBillboardComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_RhythmActivateControl : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bExecSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_RhythmActivate_SaveType bSaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool loopFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmActivateControlInfo_t> ActionControlInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLoopCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMidiActCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmActivateControlMidiInfo_t> MidiControlInfo;
    
public:
    AHbkGimmick_RhythmActivateControl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SyncNoteWhole(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SyncNoteQuarter(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SyncNoteHalf(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SyncNote8th(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SyncNote16th(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void MidiEvent(int32 NoteNo, int32 Velocity);
    
};

