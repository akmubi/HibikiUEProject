#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleType.h"
#include "EHbkNote.h"
#include "HbkBossCommandBattleCommand.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossCommandBattleCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossCommandBattleType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    HIBIKI_API FHbkBossCommandBattleCommand();
};

