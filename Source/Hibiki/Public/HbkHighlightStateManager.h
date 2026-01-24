#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHighlightStateManager.generated.h"

class UHbkHighlightDataManager;
class UHbkHighlightState;

UCLASS(Blueprintable, Transient)
class UHbkHighlightStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkHighlightState*> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHighlightDataManager* DataManager;
    
public:
    UHbkHighlightStateManager();

};

