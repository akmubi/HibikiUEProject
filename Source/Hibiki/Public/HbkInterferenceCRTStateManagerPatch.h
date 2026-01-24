#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkInterferenceCRTStateManagerPatch.generated.h"

class UHbkInterferenceCRTDataManagerPatch;
class UHbkInterferenceCRTStatePatch;

UCLASS(Blueprintable, Transient)
class UHbkInterferenceCRTStateManagerPatch : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkInterferenceCRTStatePatch* ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkInterferenceCRTDataManagerPatch* DataManager;
    
public:
    UHbkInterferenceCRTStateManagerPatch();

};

