#pragma once
#include "CoreMinimal.h"
#include "TngGameSystem.h"
#include "HbkChallengeManager.generated.h"

class UHbkChallengeAsset;
class UHbkChallengeIF;
class UHbkHideOutChallenge;
class UHbkHideOutExtraChallenge;

UCLASS(Blueprintable)
class UHbkChallengeManager : public UTngGameSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkChallengeAsset* Asset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkChallengeIF*> ChallengeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHideOutChallenge* HideOutChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHideOutExtraChallenge* HideOutExtraChallenge;
    
public:
    UHbkChallengeManager();

};

