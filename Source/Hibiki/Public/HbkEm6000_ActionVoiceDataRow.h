#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkEm6000_ActionVoiceType.h"
#include "HbkBossActionVoiceContent.h"
#include "HbkEm6000_ActionVoiceDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_ActionVoiceDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000_ActionVoiceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossActionVoiceContent Content;
    
    HIBIKI_API FHbkEm6000_ActionVoiceDataRow();
};

