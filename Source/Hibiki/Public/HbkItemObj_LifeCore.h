#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_LifeCore.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_LifeCore : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoreAmount;
    
    UHbkItemObj_LifeCore();

};

