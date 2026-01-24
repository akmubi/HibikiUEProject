#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkLoadLevelInstanceInfo_t.h"
#include "HbkLoadLevelInstanceArray_t.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkLoadLevelInstanceArray_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 loadLevelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer loadLevelTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName loadLevelTagCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer teleportActorTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkLoadLevelInstanceInfo_t> levelInstanceArray;
    
    FHbkLoadLevelInstanceArray_t();
};

