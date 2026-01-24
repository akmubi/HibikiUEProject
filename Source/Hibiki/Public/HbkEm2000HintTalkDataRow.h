#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkEm2000HintTalkType.h"
#include "HbkBossHintTalkContent.h"
#include "HbkEm2000HintTalkDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm2000HintTalkDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm2000HintTalkType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossHintTalkContent Content;
    
    HIBIKI_API FHbkEm2000HintTalkDataRow();
};

