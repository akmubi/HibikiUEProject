#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkEm6000_HintTalkType.h"
#include "HbkBossHintTalkContent.h"
#include "HbkEm6000_HintTalkDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_HintTalkDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000_HintTalkType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossHintTalkContent Content;
    
    HIBIKI_API FHbkEm6000_HintTalkDataRow();
};

