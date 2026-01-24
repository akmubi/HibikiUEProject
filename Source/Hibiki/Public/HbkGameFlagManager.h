#pragma once
#include "CoreMinimal.h"
#include "HbkGameMapFlagSystemSignatureDelegate.h"
#include "TngGameSystem.h"
#include "HbkGameFlagManager.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameFlagManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameMapFlagSystemSignature OnChangedMapFlag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameMapFlagSystemSignature OnCallLog;
    
    UHbkGameFlagManager();

};

