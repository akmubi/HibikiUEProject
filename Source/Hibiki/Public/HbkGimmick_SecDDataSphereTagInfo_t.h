#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkGimmick_SecDDataSphereTagInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_SecDDataSphereTagInfo_t {
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
    
    HIBIKI_API FHbkGimmick_SecDDataSphereTagInfo_t();
};

