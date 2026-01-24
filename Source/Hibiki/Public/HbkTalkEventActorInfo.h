#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkEventKeyState.h"
#include "HbkTalkEventActorInfo.generated.h"

class AActor;
class UHbkGameAgentComponent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkEventActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkGameAgentComponent> AgentPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHbkTalkEventKeyState CurState;
    
    FHbkTalkEventActorInfo();
};

