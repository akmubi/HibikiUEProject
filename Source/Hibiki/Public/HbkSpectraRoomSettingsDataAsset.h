#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkSpectraRoomBattleData.h"
#include "HbkSpectraRoomBattleRoomAudioData.h"
#include "HbkSpectraRoomExitData.h"
#include "HbkSpectraRoomFirstRoundTalk.h"
#include "HbkSpectraRoomNextRoundTalk.h"
#include "HbkSpectraRoomReturnToHideOutAudioData.h"
#include "HbkSpectraRoomStringData.h"
#include "HbkSpectraRoomSettingsDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkSpectraRoomSettingsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomFirstRoundTalk FirstRoundTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomNextRoundTalk NextRoundTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomExitData ExitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomBattleData BattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomReturnToHideOutAudioData ReturnToHideOutAudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomBattleRoomAudioData BattleRoomAudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomStringData StringData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UHbkSpectraRoomSettingsDataAsset();

};

