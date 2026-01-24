#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "PhotoModeTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeTableRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialPossession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RewardTag;
    
    HIBIKI_API FPhotoModeTableRowBase();
};

