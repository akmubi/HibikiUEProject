#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkSoloLightingDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkSoloLightingDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    UHbkSoloLightingDataManager();

};

