#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPostProcessFiltersPatch.generated.h"

class UHbkPostProcessFiltersDataManagerPatch;

UCLASS(Blueprintable)
class UHbkPostProcessFiltersPatch : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPostProcessFiltersDataManagerPatch* DataManager;
    
public:
    UHbkPostProcessFiltersPatch();

};

