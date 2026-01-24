#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTowerProgress_PermanentParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTowerProgress_PermanentParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool MenuTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool BattleTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool PrepareTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool KorsicaTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool ResultTutorial;
    
    HIBIKI_API FHbkRhythmTowerProgress_PermanentParam();
};

