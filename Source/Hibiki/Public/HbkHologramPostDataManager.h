#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHologramPostDataManager.generated.h"

class UDataTable;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UHbkHologramPostDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* HologramPostMPC;
    
public:
    UHbkHologramPostDataManager();

};

