#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMGRhythmTower_SoundAssetKindRow.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_SoundAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RegistMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MainBGMState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ProgressState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> OptionStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartBattleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndBattleState;
    
    HIBIKI_API FHbkMGRhythmTower_SoundAssetKindRow();
};

