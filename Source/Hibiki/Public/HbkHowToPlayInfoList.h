#pragma once
#include "CoreMinimal.h"
#include "HbkHowToPlayDetailInfo.h"
#include "HbkHowToPlayInfoList.generated.h"

USTRUCT(BlueprintType)
struct FHbkHowToPlayInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkHowToPlayDetailInfo> InfoList;
    
    HIBIKI_API FHbkHowToPlayInfoList();
};

