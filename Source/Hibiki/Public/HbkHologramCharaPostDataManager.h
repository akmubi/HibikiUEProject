#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHologramCharaPostDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkHologramCharaPostDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    UHbkHologramCharaPostDataManager();

};

