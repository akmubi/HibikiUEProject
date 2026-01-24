#pragma once
#include "CoreMinimal.h"
#include "EHbkNp0900_PageTutorialType.h"
#include "Templates/SubclassOf.h"
#include "HbkNp0900_TutorialPageData.generated.h"

class UHbkTutorialDataObject;

USTRUCT(BlueprintType)
struct FHbkNp0900_TutorialPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNp0900_PageTutorialType PageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePageUIInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHbkTutorialDataObject>> TutorialPages;
    
    HIBIKI_API FHbkNp0900_TutorialPageData();
};

