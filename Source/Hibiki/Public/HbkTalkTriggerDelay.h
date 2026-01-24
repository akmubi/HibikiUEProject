#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkTalkTriggerDelay.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkTriggerDelay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FHbkTalkTriggerDelay();
};

