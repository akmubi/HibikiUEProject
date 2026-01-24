#pragma once
#include "CoreMinimal.h"
#include "HbkBattleCommandScoreBeatLineInfo.generated.h"

class UHbkBossCommandScoreBarPartsWidget;

USTRUCT(BlueprintType)
struct FHbkBattleCommandScoreBeatLineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkBossCommandScoreBarPartsWidget> LineWidget;
    
    HIBIKI_API FHbkBattleCommandScoreBeatLineInfo();
};

