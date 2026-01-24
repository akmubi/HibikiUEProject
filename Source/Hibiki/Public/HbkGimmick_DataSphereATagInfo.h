#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkGimmick_DataSphereATagInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DataSphereATagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer activateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName activateCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer deactivateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName deactivateCallSign;
    
    HIBIKI_API FHbkGimmick_DataSphereATagInfo();
};

