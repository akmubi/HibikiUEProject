#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_Circuit.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_Circuit : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CircuitAmount;
    
    UHbkItemObj_Circuit();

};

