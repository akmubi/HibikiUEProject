#pragma once
#include "CoreMinimal.h"
#include "PropertyPerBeat.generated.h"

USTRUCT(BlueprintType)
struct FPropertyPerBeat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToNextPoint;
    
    HIBIKI_API FPropertyPerBeat();
};

