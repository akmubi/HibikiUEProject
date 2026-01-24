#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkDamagePartInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkDamagePartInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SurfaceTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNameList;
    
    HIBIKI_API FHbkDamagePartInfo();
};

