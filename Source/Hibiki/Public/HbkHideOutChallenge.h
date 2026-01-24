#pragma once
#include "CoreMinimal.h"
#include "HbkChallengeIF.h"
#include "HbkHideOutChallengeProgress.h"
#include "HbkHideOutChallengeParamRow.h"
#include "HbkHideOutChallenge.generated.h"

UCLASS(Blueprintable)
class UHbkHideOutChallenge : public UHbkChallengeIF {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkHideOutChallenge_OnChallengeUnlocked, const FHbkHideOutChallengeParamRow&, ChallengeParam, const FHbkHideOutChallengeProgressChallengeParam&, ChallengeProgress);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHideOutChallenge_OnChallengeUnlocked OnChallengeUnlocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkHideOutChallengeProgress Progress;
    
public:
    UHbkHideOutChallenge();

};

