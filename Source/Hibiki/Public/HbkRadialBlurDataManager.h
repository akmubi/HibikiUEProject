#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkRadialBlurDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkRadialBlurDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    UHbkRadialBlurDataManager();

};

