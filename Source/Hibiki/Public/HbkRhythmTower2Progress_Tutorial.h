#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTower2Progress_Tutorial.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTower2Progress_Tutorial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool HowToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Growth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool StartPerform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool GameOverDialog;
    
    HIBIKI_API FHbkRhythmTower2Progress_Tutorial();
};

