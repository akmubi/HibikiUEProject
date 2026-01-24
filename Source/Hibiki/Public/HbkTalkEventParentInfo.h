#pragma once
#include "CoreMinimal.h"
#include "HbkTalkEventParentInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkEventParentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ParentKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ParentBoneName;
    
    FHbkTalkEventParentInfo();
};

