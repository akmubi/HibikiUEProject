#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGlitchDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkGlitchDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    UHbkGlitchDataManager();

};

