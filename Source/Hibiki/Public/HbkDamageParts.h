#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkDamagePartInfo.h"
#include "HbkDamageParts.generated.h"

UCLASS(Abstract, Blueprintable)
class HIBIKI_API UHbkDamageParts : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkDamagePartInfo> PartsList;
    
public:
    UHbkDamageParts();

};

