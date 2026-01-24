#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000CommandBattleCommand.h"
#include "HbkEm6000NoteTime.h"
#include "HbkEm6000CommandBattleCommandParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000CommandBattleCommandParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000CommandBattleCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000NoteTime InputNote;
    
    HIBIKI_API FHbkEm6000CommandBattleCommandParam();
};

