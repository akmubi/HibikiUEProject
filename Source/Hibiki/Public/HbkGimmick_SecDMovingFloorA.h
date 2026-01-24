#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "EHbkNote.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SecDMovingFloorA.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SecDMovingFloorA : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t curveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool loopFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OpenWaitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CloseWaitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> OpenStartSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pOpenStartSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> OpenEndSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pOpenEndSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> CloseStartSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pCloseStartSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> CloseEndSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pCloseEndSE;
    
public:
    AHbkGimmick_SecDMovingFloorA(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHalfEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceLoadEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnBarEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void On8thEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void On16thEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat);
    
};

