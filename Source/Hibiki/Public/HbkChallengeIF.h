#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkChallengeIF.generated.h"

class UHbkChallengeAsset;

UCLASS(Blueprintable)
class UHbkChallengeIF : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkChallengeAsset* Asset;
    
public:
    UHbkChallengeIF();

};

