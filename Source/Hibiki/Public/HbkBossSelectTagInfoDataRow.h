#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EHbkBossSelectTagElection.h"
#include "EHbkDifficultyType.h"
#include "HbkBossSelectTagInfoData.h"
#include "HbkBossSelectTagInfoDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossSelectTagInfoDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SelectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossSelectTagElection Election;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossSelectTagInfoData DefaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkBossSelectTagInfoData> OverrideData;
    
    HIBIKI_API FHbkBossSelectTagInfoDataRow();
};

