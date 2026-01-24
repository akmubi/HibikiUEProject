#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkKorsicaGimmickMarkName.h"
#include "HbkKorsicaRhythmPatRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkKorsicaRhythmPatRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHbkKorsicaGimmickMarkName> MarkList;
    
    FHbkKorsicaRhythmPatRow();
};

