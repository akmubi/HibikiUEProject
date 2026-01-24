#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkableMode.h"
#include "HbkTalkable_GameFlagTalkDataInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkTalkable_GameFlagTalkDataInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapGameFlagCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapGameFlagRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StartTalkLineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkableMode TalkMode;
    
    HIBIKI_API FHbkTalkable_GameFlagTalkDataInfo_t();
};

