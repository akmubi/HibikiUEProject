#pragma once
#include "CoreMinimal.h"
#include "HbkTextureAnimationNoteInfo_t.h"
#include "HbkTextureAnimationMatInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkTextureAnimationMatInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UScrollValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VScrollValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTextureAnimationNoteInfo_t NoteInfo;
    
    HIBIKI_API FHbkTextureAnimationMatInfo_t();
};

