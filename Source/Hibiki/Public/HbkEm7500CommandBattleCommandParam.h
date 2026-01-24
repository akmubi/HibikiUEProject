#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500CommandBattleCommand.h"
#include "HbkEm7500NoteTime.h"
#include "HbkEm7500CommandBattleCommandParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500CommandBattleCommandParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500CommandBattleCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime InputNote;
    
    HIBIKI_API FHbkEm7500CommandBattleCommandParam();
};

