#pragma once
#include "CoreMinimal.h"
#include "HbkSpectraRoomBranchAudioData.h"
#include "HbkSpectraRoomAudioData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkSpectraRoomAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StopMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomBranchAudioData RegistMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomBranchAudioData BGMState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSpectraRoomBranchAudioData ProgressState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkSpectraRoomBranchAudioData> OptionStateList;
    
    FHbkSpectraRoomAudioData();
};

