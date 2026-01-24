#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkGimmick_DLLightningNoteInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DLLightningNoteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    HIBIKI_API FHbkGimmick_DLLightningNoteInfo();
};

