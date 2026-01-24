#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialTypeName.h"
#include "Templates/SubclassOf.h"
#include "HbkTutorialProcessObject.generated.h"

class UHbkTutorialDataObject;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTutorialProcessObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTutorialTypeName PageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject> PageData_First;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject> PageData_Second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject> PageData_Third;
    
    FHbkTutorialProcessObject();
};

