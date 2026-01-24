#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkHideOutChallengeArtParamRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutChallengeArtParamRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartsNo;
    
    HIBIKI_API FHbkHideOutChallengeArtParamRow();
};

