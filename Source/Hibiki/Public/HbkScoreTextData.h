#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkScoreActionType.h"
#include "HbkScoreTextData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkScoreTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkScoreActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DrawText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NameTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NumTexture;
    
    FHbkScoreTextData();
};

