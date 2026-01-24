#pragma once
#include "CoreMinimal.h"
#include "HbkBattleCommandScoreBarButtonInfo.generated.h"

class UHbkBossCommandScoreBarPartsWidget;

USTRUCT(BlueprintType)
struct FHbkBattleCommandScoreBarButtonInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkBossCommandScoreBarPartsWidget> ButtonWidget;
    
    HIBIKI_API FHbkBattleCommandScoreBarButtonInfo();
};

