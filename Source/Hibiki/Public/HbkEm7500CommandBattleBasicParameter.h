#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500CommandBattleCommand.h"
#include "EHbkNote.h"
#include "HbkEm7500NoteTime.h"
#include "HbkEm7500CommandBattleBasicParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500CommandBattleBasicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime ValidNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime PreSuccessNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime PostSuccessNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote PreJustSuccessNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreJustSuccessNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote PostJustSuccessNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostJustSuccessNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEm7500CommandBattleCommand, FHbkEm7500NoteTime> InputLatencyNote;
    
    HIBIKI_API FHbkEm7500CommandBattleBasicParameter();
};

