#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HbkBeatHitInfo.h"
#include "HbkPlayerBeatHitDataAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayerBeatHitDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkBeatHitInfo> BeatHitInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AnimBeatHitTagList;
    
    UHbkPlayerBeatHitDataAsset();

};

