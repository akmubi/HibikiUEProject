#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkARPostDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkARPostDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* OverrideDataTable;
    
public:
    UHbkARPostDataManager();

};

