#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_TalkVfxOrder.h"
#include "HbkTalkContext.h"
#include "HbkTalkSessionConf.h"
#include "HbkGimmick_Talk.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_Talk : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_TalkDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_TalkDelegate OnTalkEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf TalkSessionConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_TalkVfxOrder VfxOrder;
    
public:
    AHbkGimmick_Talk(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void CreateVfxSyncEvent(int32 BeatCount, bool bOnBeat);
    
};

