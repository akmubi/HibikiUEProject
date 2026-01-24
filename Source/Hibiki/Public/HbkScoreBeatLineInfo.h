#pragma once
#include "CoreMinimal.h"
#include "HbkScoreBeatLineInfo.generated.h"

class UHbkScoreBarPartsWidget;

USTRUCT(BlueprintType)
struct FHbkScoreBeatLineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkScoreBarPartsWidget> LineWidget;
    
    HIBIKI_API FHbkScoreBeatLineInfo();
};

