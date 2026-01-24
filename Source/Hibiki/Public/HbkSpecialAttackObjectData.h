#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EHbkSpAtkObjectPickType.h"
#include "HbkFirstPickSpAtkObjectData.h"
#include "HbkSpecialAttackObjectData.generated.h"

class AHbkPlayerSpecialAttackObjectBase;

USTRUCT(BlueprintType)
struct FHbkSpecialAttackObjectData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpAtkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AHbkPlayerSpecialAttackObjectBase>> GenerateObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkSpAtkObjectPickType PickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PickCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFirstPickSpAtkObjectData> FirstPickDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoOnceCommonResponse;
    
    HIBIKI_API FHbkSpecialAttackObjectData();
};

