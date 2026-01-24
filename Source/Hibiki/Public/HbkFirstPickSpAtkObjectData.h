#pragma once
#include "CoreMinimal.h"
#include "HbkFirstPickSpAtkObjectData.generated.h"

class AHbkPlayerSpecialAttackObjectBase;

USTRUCT(BlueprintType)
struct FHbkFirstPickSpAtkObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHbkPlayerSpecialAttackObjectBase> GenerateObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AHbkPlayerSpecialAttackObjectBase>> NotGenerateTogetherList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickLuck;
    
    HIBIKI_API FHbkFirstPickSpAtkObjectData();
};

