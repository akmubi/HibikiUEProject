#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableInfo_t.h"
#include "HbkTalkableStageActor.h"
#include "HbkTalkableSt10_Np0900.generated.h"

class AActor;

UCLASS(Blueprintable)
class AHbkTalkableSt10_Np0900 : public AHbkTalkableStageActor {
    GENERATED_BODY()
public:
    AHbkTalkableSt10_Np0900(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndAction(AActor* pActor, const FHbkTalkableInfo_t& TalkInfo);
    
};

