#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_OverCharge.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_OverCharge : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargeAmount;
    
    UHbkItemObj_OverCharge();

};

