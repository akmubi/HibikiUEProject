#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkDifficultyType.h"
#include "HbkBossSelectTagInfoDifficultyList.h"
#include "HbkBossSelectTagInfoListAsset.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkBossSelectTagInfoListAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkBossSelectTagInfoDifficultyList> SelectTagInfoDifficultyLists;
    
    UHbkBossSelectTagInfoListAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

