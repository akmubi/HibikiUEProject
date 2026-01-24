#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_Scrap.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_Scrap : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScrapAmount;
    
    UHbkItemObj_Scrap();

};

