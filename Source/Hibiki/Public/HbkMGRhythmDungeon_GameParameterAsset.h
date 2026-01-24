#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkMGRhythmDungeon_GameParameterInfo.h"
#include "HbkMGRhythmDungeon_GameParameterAsset.generated.h"

UCLASS(Blueprintable)
class UHbkMGRhythmDungeon_GameParameterAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmDungeon_GameParameterInfo GameParameterInfo;
    
    UHbkMGRhythmDungeon_GameParameterAsset();

};

