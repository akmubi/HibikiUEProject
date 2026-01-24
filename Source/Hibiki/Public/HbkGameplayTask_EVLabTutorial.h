#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGameplayTask_EVLabTutorial.generated.h"

class UHbkTutorialDataObject_ButtonType;

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabTutorial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FailedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_ButtonType> TutorialFirstPageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_ButtonType> TutorialSecondPageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_ButtonType> TutorialThirdPageData;
    
    HIBIKI_API FHbkGameplayTask_EVLabTutorial();
};

