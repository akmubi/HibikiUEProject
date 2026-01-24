#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkFlashLigntAtkTagMeshInfo_t.h"
#include "HbkFlashLightAttackTagInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkFlashLightAttackTagInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFlashLigntAtkTagMeshInfo_t> MeshInfoArray;
    
    HIBIKI_API FHbkFlashLightAttackTagInfo_t();
};

