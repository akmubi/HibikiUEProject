#pragma once
#include "CoreMinimal.h"
#include "HbkChallengeIF.h"
#include "HbkHideOutExtraChallengeParamRow.h"
#include "HbkHideOutExtraChallengeProgress.h"
#include "HbkHideOutExtraChallengeProgressChallengeParam.h"
#include "HbkHideOutExtraChallenge.generated.h"

UCLASS(Blueprintable)
class UHbkHideOutExtraChallenge : public UHbkChallengeIF {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkHideOutExtraChallenge_OnChallengeUnlocked, const FHbkHideOutExtraChallengeParamRow&, ChallengeParam, const FHbkHideOutExtraChallengeProgressChallengeParam&, ChallengeProgress);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHideOutExtraChallenge_OnChallengeUnlocked OnChallengeUnlocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkHideOutExtraChallengeProgress Progress;
    
public:
    UHbkHideOutExtraChallenge();

private:
    UFUNCTION(BlueprintCallable)
    void UnlockDebugArcadeChallenge();
    
};

