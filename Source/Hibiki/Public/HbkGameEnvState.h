#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameEnvStateBlendParam.h"
#include "HbkGameEnvState.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class UHbkGameEnvState : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkGameEnvStateBlendParam BlendParamThisFrame;
    
public:
    UHbkGameEnvState();

};

