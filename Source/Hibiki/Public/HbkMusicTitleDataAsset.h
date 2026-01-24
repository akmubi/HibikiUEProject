#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkMusicTitleTimingType.h"
#include "HbkMusicTitleData.h"
#include "HbkMusicTitleDataAsset.generated.h"

UCLASS(Blueprintable)
class UHbkMusicTitleDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkMusicTitleTimingType, FHbkMusicTitleData> Data;
    
    UHbkMusicTitleDataAsset();

};

