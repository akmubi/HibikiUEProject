#pragma once
#include "CoreMinimal.h"
#include "EHbkMIDINoteType.h"
#include "HbkGimmick_CircuitBoardLaserMoveInfo_t.h"
#include "HbkGimmick_CircuitBoardPrepareInfo_t.h"
#include "HbkGimmick_CircuitBoardVerticalLaserInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_CircuitBoardVerticalLaserInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMIDINoteType MIDINoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MidiSubNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitMIDICount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndEventMIDICount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_CircuitBoardPrepareInfo_t> PrepareInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_CircuitBoardLaserMoveInfo_t> LaserMoveInfoArray;
    
    HIBIKI_API FHbkGimmick_CircuitBoardVerticalLaserInfo_t();
};

