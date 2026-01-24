#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPostProcessFiltersDataManagerPatch.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkPostProcessFiltersDataManagerPatch : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ColorFilterDataTable;
    
public:
    UHbkPostProcessFiltersDataManagerPatch();

};

