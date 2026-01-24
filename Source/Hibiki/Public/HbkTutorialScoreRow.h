#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkNote.h"
#include "EHbkTutorialDisplayType.h"
#include "EHbkTutorialInputType.h"
#include "HbkTutorialScoreRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTutorialScoreRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTutorialInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTutorialDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    FHbkTutorialScoreRow();
};

