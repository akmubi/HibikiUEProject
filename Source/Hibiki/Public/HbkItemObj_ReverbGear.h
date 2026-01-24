#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_ReverbGear.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_ReverbGear : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GearAmount;
    
    UHbkItemObj_ReverbGear();

};

