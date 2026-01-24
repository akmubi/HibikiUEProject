#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HbkActionInfoParam.h"
#include "HbkActionInfoAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkActionInfoAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkActionInfoParam> ActionInfoMap;
    
    UHbkActionInfoAsset();

};

