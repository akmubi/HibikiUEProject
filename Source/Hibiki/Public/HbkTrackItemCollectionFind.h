#pragma once
#include "CoreMinimal.h"
#include "HbkTrackItemCollectionReword.h"
#include "HbkTrackItemCollectionFind.generated.h"

USTRUCT(BlueprintType)
struct FHbkTrackItemCollectionFind {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FindKeyStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTrackItemCollectionReword> Rewords;
    
    HIBIKI_API FHbkTrackItemCollectionFind();
};

