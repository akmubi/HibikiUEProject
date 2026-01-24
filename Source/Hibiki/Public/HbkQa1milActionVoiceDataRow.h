#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EQa1milActionVoiceType.h"
#include "HbkBossActionVoiceContent.h"
#include "HbkQa1milActionVoiceDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkQa1milActionVoiceDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQa1milActionVoiceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossActionVoiceContent Content;
    
    HIBIKI_API FHbkQa1milActionVoiceDataRow();
};

