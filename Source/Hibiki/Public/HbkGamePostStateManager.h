#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGamePostStateManager.generated.h"

class UHbkGamePostState;

UCLASS(Blueprintable, Transient)
class UHbkGamePostStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGamePostState* ActiveState;
    
public:
    UHbkGamePostStateManager();

};

