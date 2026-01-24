#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000CommandBattleUpdateParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000CommandBattleUpdateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShrinkedTime;
    
    HIBIKI_API FHbkEm6000CommandBattleUpdateParam();
};

