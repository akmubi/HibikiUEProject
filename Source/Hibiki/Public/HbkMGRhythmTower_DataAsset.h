#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkMGRhythmTower_DataAsset.generated.h"

class UDataTable;
class UHbkMGRhythmTower_SystemAsset;

UCLASS(Blueprintable)
class UHbkMGRhythmTower_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SoundDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WaveDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkMGRhythmTower_SystemAsset* SystemAsset;
    
    UHbkMGRhythmTower_DataAsset();

};

