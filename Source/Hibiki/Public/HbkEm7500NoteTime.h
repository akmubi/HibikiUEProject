#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkEm7500NoteTime.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500NoteTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote Note;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    HIBIKI_API FHbkEm7500NoteTime();
};

