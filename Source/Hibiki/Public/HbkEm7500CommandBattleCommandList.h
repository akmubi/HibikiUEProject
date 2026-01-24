#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500CommandBattleCommandParam.h"
#include "HbkEm7500NoteTime.h"
#include "HbkEm7500CommandBattleCommandList.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500CommandBattleCommandList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime CommandBattleNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime BeginNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500NoteTime InputCommandNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CommandBattleCommandParam> Commands;
    
    HIBIKI_API FHbkEm7500CommandBattleCommandList();
};

