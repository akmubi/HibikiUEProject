#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHitImpactDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkHitImpactDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    UHbkHitImpactDataManager();

};

