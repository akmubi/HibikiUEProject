#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkEm5000NoteTime.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm5000NoteTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote Note;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FHbkEm5000NoteTime();
};

