#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500FloatingLaserType.h"
#include "EHbkNote.h"
#include "HbkEm7500FloatingLaserRequestInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500FloatingLaserRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500FloatingLaserType FloatingLaserType;
    
    HIBIKI_API FHbkEm7500FloatingLaserRequestInfo();
};

