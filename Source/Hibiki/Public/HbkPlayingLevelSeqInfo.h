#pragma once
#include "CoreMinimal.h"
#include "HbkPlayingLevelSeqInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkPlayingLevelSeqInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRecording;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCutsceneSequence;
    
    FHbkPlayingLevelSeqInfo();
};

