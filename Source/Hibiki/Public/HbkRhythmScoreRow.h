#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkRhythmScoreRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmScoreRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 buttonType;
    
    HIBIKI_API FHbkRhythmScoreRow();
};

