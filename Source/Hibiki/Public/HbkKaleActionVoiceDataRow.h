#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EKaleActionVoiceType.h"
#include "HbkBossActionVoiceContent.h"
#include "HbkKaleActionVoiceDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkKaleActionVoiceDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKaleActionVoiceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossActionVoiceContent Content;
    
    HIBIKI_API FHbkKaleActionVoiceDataRow();
};

