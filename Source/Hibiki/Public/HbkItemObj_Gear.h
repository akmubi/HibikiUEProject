#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_Gear.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_Gear : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GearAmount;
    
    UHbkItemObj_Gear();

};

