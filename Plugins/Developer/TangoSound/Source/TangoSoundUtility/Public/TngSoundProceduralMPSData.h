#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TngSoundProceduralMPSData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FTngSoundProceduralMPSData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGenerationVolume;
    
    FTngSoundProceduralMPSData();
};

