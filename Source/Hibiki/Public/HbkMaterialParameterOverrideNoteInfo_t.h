#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkMaterialParameterOverrideNoteInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkMaterialParameterOverrideNoteInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatValue;
    
    HIBIKI_API FHbkMaterialParameterOverrideNoteInfo_t();
};

