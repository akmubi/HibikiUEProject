#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000CommandBattleCommand.h"
#include "EHbkNote.h"
#include "HbkEm6000NoteTime.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000CommandBattleBasicParameter.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FHbkEm6000CommandBattleBasicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime ValidNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime PreSuccessNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime PostSuccessNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote PreJustSuccessNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreJustSuccessNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote PostJustSuccessNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostJustSuccessNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEm6000CommandBattleCommand, FHbkEm6000NoteTime> InputLatencyNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FailureDamageType;
    
    HIBIKI_API FHbkEm6000CommandBattleBasicParameter();
};

