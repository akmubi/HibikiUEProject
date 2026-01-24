#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGlitchStateManager.generated.h"

class UHbkGlitchDataManager;
class UHbkGlitchState;

UCLASS(Blueprintable, Transient)
class UHbkGlitchStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGlitchState* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGlitchDataManager* DataManager;
    
public:
    UHbkGlitchStateManager();

};

