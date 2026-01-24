#pragma once
#include "CoreMinimal.h"
#include "HbkStatusEffectTaskBase.h"
#include "HbkSETask_Anger.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, Blueprintable)
class HIBIKI_API UHbkSETask_Anger : public UHbkStatusEffectTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnceEffective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReEffectiveTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEffectived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExAttackPlayedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExAttackPlayedNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHealthTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReEffectiveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_AngerPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_AngerStop;
    
public:
    UHbkSETask_Anger();

    UFUNCTION(BlueprintCallable)
    void Receive_OnSetNoticeData();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginNotice();
    
};

