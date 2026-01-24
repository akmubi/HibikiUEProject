#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkEm5000ActionVoiceType.h"
#include "HbkBossActionVoiceContent.h"
#include "HbkEm5000ActionVoiceDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000ActionVoiceDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000ActionVoiceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossActionVoiceContent Content;
    
    HIBIKI_API FHbkEm5000ActionVoiceDataRow();
};

