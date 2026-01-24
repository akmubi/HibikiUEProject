#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkARPostStateManager.generated.h"

class UHbkARPostDataManager;
class UHbkARPostState;

UCLASS(Blueprintable, Transient)
class UHbkARPostStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkARPostState* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkARPostDataManager* DataManager;
    
public:
    UHbkARPostStateManager();

};

