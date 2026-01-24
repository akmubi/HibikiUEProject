#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EKaleHintTalkType.h"
#include "HbkBossHintTalkContent.h"
#include "HbkKaleHintTalkDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkKaleHintTalkDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKaleHintTalkType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossHintTalkContent Content;
    
    HIBIKI_API FHbkKaleHintTalkDataRow();
};

