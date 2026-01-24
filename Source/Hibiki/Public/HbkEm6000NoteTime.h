#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkEm6000NoteTime.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000NoteTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote Note;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    HIBIKI_API FHbkEm6000NoteTime();
};

