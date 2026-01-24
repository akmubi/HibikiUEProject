#pragma once
#include "CoreMinimal.h"
#include "HbkVariableMagnetPointList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkVariableMagnetPointList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> VariableMagnetPointList;
    
    FHbkVariableMagnetPointList();
};

