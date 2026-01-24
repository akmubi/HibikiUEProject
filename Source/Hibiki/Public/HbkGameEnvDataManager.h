#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameEnvTableRow.h"
#include "HbkGameEnvDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkGameEnvDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkGameEnvTableRow> ResidentTableRows;
    
public:
    UHbkGameEnvDataManager();

};

