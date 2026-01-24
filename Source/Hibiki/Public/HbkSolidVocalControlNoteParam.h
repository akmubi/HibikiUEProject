#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkSolidVocalControlNoteParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkSolidVocalControlNoteParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniversalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCalled;
    
    FHbkSolidVocalControlNoteParam();
};

