#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkTextureAnimationNoteInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkTextureAnimationNoteInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncLoopBarCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SyncNoteCountArray;
    
    HIBIKI_API FHbkTextureAnimationNoteInfo_t();
};

