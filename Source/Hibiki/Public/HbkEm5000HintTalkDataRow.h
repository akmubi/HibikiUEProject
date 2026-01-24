#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkEm5000HintTalkType.h"
#include "HbkBossHintTalkContent.h"
#include "HbkEm5000HintTalkDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000HintTalkDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000HintTalkType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossHintTalkContent Content;
    
    HIBIKI_API FHbkEm5000HintTalkDataRow();
};

