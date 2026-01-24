#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkForwardLighting.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UHbkForwardLighting : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* ForwardLightsMPC;
    
public:
    UHbkForwardLighting();

};

