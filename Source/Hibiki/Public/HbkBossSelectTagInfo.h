#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkBossSelectTagContinueInhibition.h"
#include "EHbkBossSelectTagElection.h"
#include "HbkBossSelectTagInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossSelectTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SelectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossSelectTagElection Election;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossSelectTagContinueInhibition ContinueInhibitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContinueInhibitionRate;
    
    FHbkBossSelectTagInfo();
};

