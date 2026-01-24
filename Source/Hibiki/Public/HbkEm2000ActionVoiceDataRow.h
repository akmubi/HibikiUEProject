#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkEm2000ActionVoiceType.h"
#include "HbkBossActionVoiceContent.h"
#include "HbkEm2000ActionVoiceDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm2000ActionVoiceDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm2000ActionVoiceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossActionVoiceContent Content;
    
    HIBIKI_API FHbkEm2000ActionVoiceDataRow();
};

