#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkMGRhythmDungeon_GameInfo.h"
#include "HbkMGRhythmDungeon_SystemAsset.generated.h"

UCLASS(Blueprintable)
class UHbkMGRhythmDungeon_SystemAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmDungeon_GameInfo GameInfo;
    
    UHbkMGRhythmDungeon_SystemAsset();

};

