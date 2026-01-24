#pragma once
#include "CoreMinimal.h"
#include "HbkScoreBarButtonInfo.generated.h"

class UHbkScoreBarPartsWidget;

USTRUCT(BlueprintType)
struct FHbkScoreBarButtonInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkScoreBarPartsWidget> ButtonWidget;
    
    HIBIKI_API FHbkScoreBarButtonInfo();
};

