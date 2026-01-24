#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkDifficultyType.h"
#include "HbkBossGiveDamageRateWithTag.h"
#include "HbkBossGiveDamageParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossGiveDamageParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkBossGiveDamageRateWithTag> GiveDamageRateForDifficulty;
    
    HIBIKI_API FHbkBossGiveDamageParameterDataRow();
};

